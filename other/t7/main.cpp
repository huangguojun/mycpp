/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/23/2015 02:02:21 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (hgj), guojun0921@gmail.com
 *        Company:  pengbang
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;
int main()
{
	for(int i = 0x01 ;i <= 0x10;i <<= 1)
	{
		cout << i << " " ;
	}
	cout << endl;
	return 0;
}
