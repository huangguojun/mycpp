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

struct Base 
{
	virtual void some_func(float);
};

struct Derived : Base 
{
	//virtual void some_func(int) override;   // 錯誤格式：Derive::some_func並沒有override Base::some_func
	virtual void some_func(float) override; // OK：顯式改寫
};

int main()
{

}
