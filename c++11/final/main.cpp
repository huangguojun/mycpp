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


struct Base1 final { };

struct Derived1 : Base1 { }; // 錯誤格式：class Base1已標明為final

struct Base2 {
	    virtual void f() final;
};

struct Derived2 : Base2 {
	    void f(); // 錯誤格式：Base2::f已標明為final
};

int main()
{

}
