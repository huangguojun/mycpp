/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年03月01日 14时49分52秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (), guojun.huang@qq.com
 *        Company:  Marvoto
 *
 * =====================================================================================
 */

#include <iostream>

using namespace std;
template<class T1,class T2>
class myClass{
public:
	myClass(T1 a, T2 b)
	{
		I = a;
		J = b;
	}

	void show()
	{
		cout<<"I="<<I<<", J="<<J<<endl;
	}
private:
	T1 I;
		T2 J;
};


int main()
{
	myClass<int,int> class1(3,5);
	class1.show();
	
	myClass<int,char> class2(3,'a');
	class2.show();
	
	myClass<double,int> class3(2.9,10);
	class3.show();
	
	return 0;
}
