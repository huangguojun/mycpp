/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description: c++11 thread test 
 *
 *        Version:  1.0
 *        Created:  2017年04月07日 10时01分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (), guojun.huang@qq.com
 *        Company:  Marvoto
 *
 * =====================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	auto x = 1; //自动类型推断
	cout << "x:" << x << endl; 

	decltype(x) y = x; //类型获取
	cout << "y:" << y  << endl;
	
	const vector<int> v(1);
	auto a = v[0];// a為int型別
	decltype（v[0]) b = 0;   // b為const int&型別，即vector<int>::operator[]（size_type）const的回返型別
	auto c = 0;         // c為int型別
	auto d = c;         // d為int型別      
	decltype(c) e;      // e為int型別，c實體的型別 
	decltype((c)) f = e; // f為int&型別，因為（c）是左值
	decltype(0) g;     // g為int型別，因為0是右值
}
