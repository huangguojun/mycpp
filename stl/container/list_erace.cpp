/*
 * =====================================================================================
 *
 *       Filename:  list_erace.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2018年08月20日 19时39分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (), guojun.huang@qq.com
 *        Company:  Marvoto
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <list>

using namespace std;
int main()
{
	std::list<int>test_list;
	std::list<int>::iterator test_list_it;

	test_list.push_back(1);
	test_list.push_back(2);
	test_list.push_back(3);
	test_list.push_back(4);
	test_list.push_back(5);

	
	//错误用法
	//test_list.erase(test_list_it);每次做erase时都有可能使迭代器失效，test_list_it++就发生错误了
	/*
	test_list_it = test_list.begin();
	for(;test_list_it != test_list.end();test_list_it++)
	{
		test_list.erase(test_list_it);
	}
	*/

	//正常使用
	test_list_it = test_list.begin();
	for(;test_list_it != test_list.end();)
	{
		test_list.erase(test_list_it++);
	}
}

