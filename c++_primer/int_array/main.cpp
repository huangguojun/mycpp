/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  main
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

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "int_array.h"
#include "int_array_rc.h"


void swap(IntArray& ia,int i,int j)
{
	int tmp = ia[i];
	ia[i] = ia[j];
	ia[j] = tmp;
}

char* strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len = strlen(dest);
	size_t i;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	  dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return dest;
}


int main(void)
{

	int array[4] = {0,1,2,3,};
	//IntArray ia1(array,4);
	//IntArrayRC ia2(array,4);

	//swap(ia1,1,ia1.size());
	//swap(ia2,1,ia2.size());
	//
	//
	printf("int:%d\n",sizeof(int));
	printf("long:%d\n",sizeof(long));
	printf("float:%d\n",sizeof(float));
	printf("double:%d\n",sizeof(double));
	printf("long double:%d\n",sizeof(long double));
	
	printf("wchar_t:%d\n",sizeof(wchar_t));
	return 0;
}


