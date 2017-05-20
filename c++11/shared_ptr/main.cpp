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

int main( )
{
	std::shared_ptr<double> p_first(new double) ;

	{
		std::shared_ptr<double> p_copy = p_first ;

		*p_copy = 21.2;

	}  // 此時'p_copy'會被銷毀，但動態分配的double不會被銷毀。

	return 0;  // 此時'p_first'會被銷毀，動態分配的double也會被銷毀（因為不再有指針指向它）。
}
