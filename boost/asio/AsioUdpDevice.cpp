#include "AsioUdpDevice.h"

#include <iostream>
#include <boost/version.hpp>

using namespace std;
namespace ba = boost::asio;
using ba::ip::udp;

AsioUdpDevice::AsioUdpDevice()
{
    open = false;
    local_socket = 0;
    remote_socket = 0;
}

AsioUdpDevice::AsioUdpDevice(unsigned int local_port)
{
    open = false;
    local_socket = 0;
    remote_socket = 0;

    Open(local_port);
}

AsioUdpDevice::AsioUdpDevice(unsigned int local_port, const string &ip_address,
                             unsigned int remote_port)
{
    open = false;
    local_socket = 0;
    remote_socket = 0;

    Open(local_port, ip_address, remote_port);
}

AsioUdpDevice::~AsioUdpDevice()
{
    if (open)
        Close();

    if (local_socket != 0)
        delete local_socket;

    if (remote_socket != 0)
        delete remote_socket;
}

void AsioUdpDevice::Open(unsigned int local_port)
{
    udp::endpoint local_endpoint(udp::v4(), local_port);

    if (!open) {
        local_socket = new udp::socket(io_service, local_endpoint);
#if BOOST_VERSION >= 104700
        local_socket->non_blocking(true);
#else
        boost::asio::socket_base::non_blocking_io non_blocking_command(true);
        local_socket->io_control(non_blocking_command);
#endif

        if (!local_socket->is_open())
            throw runtime_error("Failed to open local socket");

        open = true;
    }
}

void AsioUdpDevice::Open(unsigned int local_port, const string &remote_ip_address,
                         unsigned int remote_port)
{
    udp::endpoint local_endpoint(udp::v4(), local_port);
    udp::endpoint remote_endpoint(ba::ip::address::from_string(remote_ip_address), remote_port);

    if (!open) {
        local_socket = new udp::socket(io_service, local_endpoint);
#if BOOST_VERSION >= 104700
        local_socket->non_blocking(true);
#else
        boost::asio::socket_base::non_blocking_io non_blocking_command(true);
        local_socket->io_control(non_blocking_command);
#endif

        remote_socket = new udp::socket(io_service);

        try {
            remote_socket->connect(remote_endpoint);
        } catch (std::exception e) {
            cerr << "Failed to connect to remote socket" << endl;
            throw;
        }

        if (!local_socket->is_open())
            throw runtime_error("Failed to open local socket");

        if (!remote_socket->is_open())
            throw runtime_error("Failed to open remote socket");

        open = true;
    }
}

void AsioUdpDevice::Close()
{
    if (open) {
        if (local_socket != 0)
            local_socket->close();
        if (remote_socket != 0)
            remote_socket->close();
        open = false;
    }
}

void AsioUdpDevice::SetReadCallback(
        const boost::function<void(const unsigned char *, size_t)> &handler)
{
    read_callback = handler;
}

bool AsioUdpDevice::Write(const vector<unsigned char> &msg)
{
    if (!open)
        return false;

    try {
        remote_socket->send(ba::buffer(&(msg[0]), msg.size()));
    } catch (const boost::system::system_error &err) {
        throw;
    }

    return true;
}

bool AsioUdpDevice::Write(const string &msg)
{
    if (!open)
        return false;

    try {
        remote_socket->send(ba::buffer(msg.c_str(), msg.size()));
    } catch (const boost::system::system_error &err) {
        throw;
    }

    return true;
}

void AsioUdpDevice::Read()
{
    size_t bytes_transferred = 0;

    if (local_socket->available() > 0) {
        try {
            bytes_transferred = local_socket->receive(ba::buffer(read_msg, MAX_READ_LENGTH));
        } catch (boost::system::system_error &err) {
            std::cerr << "Error: " << err.what() << std::endl;
        }
    }

    if (!read_callback.empty() && (bytes_transferred > 0))
        read_callback(const_cast<unsigned char *>(read_msg), bytes_transferred);
}
