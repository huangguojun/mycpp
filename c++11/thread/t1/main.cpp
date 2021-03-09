/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description: c++11 thread test 
 *
 *        Version:  1.0
 *        Created:  2017年04月07日 10时01分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (), guojun.huang@qq.com
 *        Company:  Marvoto
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <iostream> 
#include <thread>   

void thread_task()
{
	std::cout << "form thread_task : " <<std::this_thread::get_id() << std::endl;
}


int main(int argc, const char *argv[])
{
	std::thread t1(thread_task);
	std::thread t2;

	t2 = std::move(t1);
	std::cout << "from main thread : "<< std::this_thread::get_id() << std::endl;
	
	std::cout << "hardware_concurrency : "<< std::thread::hardware_concurrency() << std::endl;

	t2.join();

	return EXIT_SUCCESS;
}

