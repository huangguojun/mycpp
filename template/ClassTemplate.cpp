/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年03月01日 14时38分30秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (), guojun.huang@qq.com
 *        Company:  Marvoto
 *
 * =====================================================================================
 */

#include <iostream>
#include "ClassTemplate.h"

using std::cout;
using std::endl;

template <typename T1,typename T2>
myClass<T1,T2>::myClass(T1 a,T2 b)
		:I(a),J(b)
{

}

template <typename T1,typename T2>
void myClass<T1,T2>::show()
{
	cout<<"I="<<I<<", J="<<J<<endl;
}
