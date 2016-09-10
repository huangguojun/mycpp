/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月17日 16时07分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (), guojun0921@gmail.com
 *        Company:  WellD
 *
 * =====================================================================================
 */

#include "yasper.h" 
using yasper::ptr; 
struct SomeClass 
{
	SomeClass() : x(0)
	{
	}
	int x; 
	int f()
	{
		return x;
	}
}; 

int main(int argc, char* argv[]) 
{ 	
	//preferred 
	ptr<SomeClass> p1(new SomeClass); 
	
	//less safe
	ptr<SomeClass> p2 = new SomeClass;
	
	//unsafe but still allowed 
	SomeClass* raw = new SomeClass; 
	ptr<SomeClass> p3(raw); 

	return 0;

	/*
		when program quits p1, p2, p3 all delete 
		objects they point to
	*/ 
	
}
