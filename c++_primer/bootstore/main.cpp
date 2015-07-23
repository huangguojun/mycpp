/*
 * =====================================================================================
 *
 *       Filename:  helloworld.cpp
 *
 *    Description:  hello world
 *
 *        Version:  1.0
 *        Created:  2014年06月16日 星期一 05時32分15秒 HKT
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (hgj), guojun0921@gmail.com
 *        Company:  pengbang
 *
 * =====================================================================================
 */

#include <iostream>
#include <string>
#include <cstdio>
#include <cassert>
#include <fstream>

using namespace std;


void readIn()
{
	cout << "readIn()" << endl;
}

void sort()
{
	cout << "sort()" << endl;
}

void compact()
{
	cout << "compact()" << endl;
}

void print()
{
	cout << "print()" << endl;
}

int main()
{
	

	ofstream outfile("out_file");
	ifstream infile("in_file");

	if(!infile)
	{
		cerr << "error" << endl;
		return -1;
	}

	string word;

	while(infile >> word)
	{
		outfile << word << ' ';
	}
	return 0;
}

