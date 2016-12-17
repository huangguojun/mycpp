/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年09月10日 15时54分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (), guojun0921@gmail.com
 *        Company:  WellD
 *
 * =====================================================================================
 */


#include <boost/any.hpp>
#include <string>
#include <cstdio>
#include <cassert>
int main()
{
	boost::any a;
	boost::any b;
	a.clear();
	if(a.empty())
	{
		printf("a.Empty\n");
	}
}
