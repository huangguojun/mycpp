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

#include <boost/variant.hpp>
#include <string>
#include <iostream>


int main()
{
	boost::variant<double,char,std::string> v;
	v = 3.14;
	v = 'A';
	v= "Boost";
	std::cout << "good \n" ;
}
