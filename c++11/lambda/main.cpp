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

#include <functional>
#include <iostream>
using namespace std;

auto func1 = []() { cout << "hello,func1()!! \n";};

auto func2 = []()->int 
{ 
	cout << "hello,func2()!! \n";
	return 1;
};

int main()
{
	func1();

	int i = func2();
	cout << "i:" << i << endl; 

	return 0;
}
