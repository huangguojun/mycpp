/*
 * =====================================================================================
 *
 *       Filename:  int_array.cpp
 *
 *    Description:  IntArray
 *
 *        Version:  1.0
 *        Created:  2014年06月16日 星期一 09時45分18秒 HKT
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (hgj), guojun0921@gmail.com
 *        Company:  pengbang
 *
 * =====================================================================================
 */

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
#include "int_array_rc.h"

IntArrayRC::IntArrayRC(int sz)
		:IntArray(sz)
{
}

IntArrayRC::IntArrayRC(const int *iar,int sz)
		:IntArray(iar,sz)
{
}

int& IntArrayRC::operator[](int index)
{

	check_range(index);
	return ia[index];
}

void IntArrayRC::check_range(int index)
{
//	assert(index >=0 && index <size);
}


