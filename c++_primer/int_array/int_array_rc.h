/*
 * =====================================================================================
 *
 *       Filename:  int_array.h
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

#ifndef INT_ARRAY_RC_H
#define INT_ARRAY_RC_H
#include "int_array.h"

class IntArrayRC: public IntArray{

	public:
		IntArrayRC (int sz = DefaultArraySize);
		IntArrayRC (const int *array ,int array_size);
		IntArrayRC (const IntArray &rhs);
		
		virtual int& operator[](int);

	private:
		void check_range(int);

};

#endif // INT_ARRAY_RC_H
