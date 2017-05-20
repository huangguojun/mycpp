/*
 * =====================================================================================
 *
 *       Filename:  main2.cpp
 *
 *    Description:  G
 *
 *        Version:  1.0
 *        Created:  2017年03月07日 10时11分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (), guojun.huang@qq.com
 *        Company:  Marvoto
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;

#pragma pack(8)

struct example1
{
	short a;
	long b;
};
struct example2
{
	char c;
	example1 struct1;
	short e;
};
#pragma pack()

int main(int argc, char* argv[])
{
	struct example2 struct2;
	cout << sizeof(struct example1) << endl;
	cout << sizeof(struct example2) << endl;
	cout << (unsigned long)(&struct2.struct1) - (unsigned long)(&struct2) << endl;
	return 0;
}
