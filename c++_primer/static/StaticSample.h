/*
 * =====================================================================================
 *
 *       Filename:  StaticSample.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年07月02日 星期三 11時30分48秒 HKT
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (hgj), guojun0921@gmail.com
 *        Company:  pengbang
 *
 * =====================================================================================
 */

#ifndef STATIC_SAMPLE_H
#define STATIC_SAMPLE_H
#include <iostream>
using namespace std;
class StaticSample
{
	public:
		StaticSample();
		~StaticSample();
		static void display();
	private:
		static int obj_count;
		static int obj_living;
};
#endif
