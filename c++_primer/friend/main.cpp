/*
 * =====================================================================================
 *
 *       Filename:  gril.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年07月03日 星期四 12時09分00秒 HKT
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (hgj), guojun0921@gmail.com
 *        Company:  pengbang
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstring>

using namespace std;

class Gril
{
private:
friend void disp(Gril &x);
public:
	Gril(char* n,int d)
	{
		strcpy(name,n);
		age = d;
	}
private:
	char name[10];
	int age;
};

void disp(Gril &x)
{
	cout << x.name << " " << x.age << endl; 
}

int main()
{
	Gril e((char*)"hgj",14);
	disp(e);
}


