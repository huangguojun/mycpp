#ifndef __ASIOUDPDEVICE__
#define __ASIOUDPDEVICE__

#include <string>
#include <boost/bind.hpp>
#include <boost/asio.hpp>
#include <boost/function.hpp>

#define MAX_READ_LENGTH 512

class AsioUdpDevice
{
public:
    AsioUdpDevice();
    AsioUdpDevice(unsigned int local_port);
    AsioUdpDevice(unsigned int local_port, const std::string &ip_address, unsigned int remote_port);
    ~AsioUdpDevice();

    void Open(unsigned int local_port);
    void Open(unsigned int local_port, const std::string &ip_address, unsigned int remote_port);
    void Close();

    void Read();
    void SetReadCallback(const boost::function<void(const unsigned char *, size_t)> &handler);

    bool Write(const std::string &msg);
    bool Write(const std::vector<unsigned char> &msg);

private:
    bool open;

    boost::asio::io_service io_service;
    boost::asio::ip::udp::socket *local_socket;
    boost::asio::ip::udp::socket *remote_socket;

    boost::function<void(const unsigned char *, size_t)> read_callback;

    unsigned char read_msg[MAX_READ_LENGTH];
};

#endif
