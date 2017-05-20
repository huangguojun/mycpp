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

using std::cout;

using std::endl;

template <class T>
T min(T x,T y)
{
	return(x<y)?x:y;
}

int main( )
{

     int n1=2,n2=10;

	 double d1=1.5,d2=5.6;
	 cout<< "较小整数:"<<min(n1,n2)<<endl;
	 cout<< "较小实数:"<<min(d1,d2)<<endl;
	 return 0;
}
