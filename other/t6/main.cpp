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

class BClass
{
public:
	BClass() : i(1), ci(2), ri(i)
	{
	// 对于常量型成员变量和引用型成员变量，必须通过参数化列表的方式进行初始化
	//普通成员变量也可以放在函数体里，但是本质其实已不是初始化，而是一种普通的运算操作-->赋值运算，效率也低
		
	} 

private:
	int i;                                  // 普通成员变量
	const int ci;                           // 常量成员变量
	int &ri;                                // 引用成员变量
	static int si;                          // 静态成员变量
	//static int si2 = 100;                 // error: 只有静态常量成员变量，才可以这样初始化
	static const int csi;                   // 静态常量成员变量
	static const int csi2 = 100;            // 静态常量成员变量的初始化(Integral type)    (1)
	static const double csd;                // 静态常量成员变量(non-Integral type)
	//static const double csd2 = 99.9;      // error: 只有静态常量整型数据成员才可以在类中初始化
};

//注意下面三行：不能再带有static
int BClass::si = 0; // 静态成员变量的初始化(Integral type)
const int BClass::csi = 1; // 静态常量成员变量的初始化(Integral type)
const double BClass::csd = 99.9; // 静态常量成员变量的初始化(non-Integral type)

// 在初始化(1)中的csi2时，根据著名大师Stanley B.Lippman的说法下面这行是必须的。
// 但在VC2003中如果有下面一行将会产生错误，而在VC2005中，下面这行则可有可无，这个和编译器有关。
const int BClass::csi2;

int main()
{
	BClass b;
	return 0;
}
