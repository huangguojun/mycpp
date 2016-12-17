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

#include <string>
#include <cstdio>
#include <boost/shared_ptr.hpp>


class A
{
	public:
		void print()
		{
			printf("class A print !\n");
		}
};

int main()
{
	boost::shared_ptr<A> a1(new A());
	a1->print();
}
