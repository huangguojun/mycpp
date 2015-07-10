/*
 * =====================================================================================
 *
 *       Filename:  StaticSample.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年07月02日 星期三 11時36分13秒 HKT
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (hgj), guojun0921@gmail.com
 *        Company:  pengbang
 *
 * =====================================================================================
 */

#include "StaticSample.h"

int StaticSample::obj_count = 0;
int StaticSample::obj_living = 0;

StaticSample::StaticSample()
{
	obj_count++;
	obj_living++;
}

StaticSample::~StaticSample()
{
	obj_living--;
}

void StaticSample::display()
{
	cout << "obj_count" << obj_count << "obj_living" << obj_living << endl ;
}
