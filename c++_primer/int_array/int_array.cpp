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
#include "int_array.h"

using namespace std;

IntArray::IntArray(int sz)
{
	printf("%s\n",__FUNCTION__);
	init(sz,0);
}

IntArray::IntArray(const int *array,int sz)
{
	printf("%s\n",__FUNCTION__);
	init(sz,array);
}


IntArray::IntArray(const IntArray &rhs)
{
	printf("%s\n",__FUNCTION__);
}

void IntArray::init(int sz, const int *array)
{
	_size = sz;
	ia = new int(_size);
	for(int ix = 0; ix < _size;ix++)
	{
		if(!array)
		{

			ia[ix] = 0;
		}
		else
		{
			ia[ix] = array[ix];
		}
	}
}

IntArray::~IntArray()
{
	printf("%s\n",__FUNCTION__);
	delete ia;
}

inline int IntArray::size() const 
{
	return _size;
}

int& IntArray::operator[](int index)
{
	return ia[index];
}

void IntArray::sort()
{

}
int IntArray::min() const
{

}

int IntArray::max() const
{

}

int IntArray::find(int value) const
{

}
