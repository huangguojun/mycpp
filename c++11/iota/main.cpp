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
#include <array>
#include <numeric>


int main()
{
	std::array<int, 10> ai;
	std::iota(ai.begin(), ai.end(), 100);
	for(int i: ai)
	{
		std::cout<<i<<" ";//1 2 3 4 5 6 7 8 9 10 
	}
	std::cout << std::endl;
}
