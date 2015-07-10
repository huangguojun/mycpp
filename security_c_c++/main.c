/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  string
 *
 *        Version:  1.0
 *        Created:  2014年03月15日 星期六 06時57分36秒 HKT
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (hgj), guojun0921@gmail.com
 *        Company:  pengbang
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char a[16];
	char b[16];
	char c[32];
	strcpy(a,"0123456789abcdef");
	strcpy(b,"0123456789abcdef");

	//strcpy(c,a);
	//strcat(c,b);
	printf("a= %s\n",a);
	printf("b= %s\n",a);
	printf("c= %s\n",a);
}
