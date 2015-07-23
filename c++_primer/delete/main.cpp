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

class T{
public:
	T(){cout << "constructor" << endl;}
	~T(){cout << "destructor" << endl;}
};

int main()
{
	const int NUM = 3;
	T* p1 = new T;
	cout << hex << p1 <<endl;
	delete p1;
	cout << endl << endl;
	cout << "-------------------"<<endl <<endl;
	T* p2 = new T[NUM];
	cout << hex << p2 <<endl;
	delete[] p2;

}
