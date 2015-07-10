/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年07月03日 星期四 12時03分53秒 HKT
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (hgj), guojun0921@gmail.com
 *        Company:  pengbang
 *
 * =====================================================================================
 */

#include "StaticSample.h"

int main()
{
	StaticSample::display();
	StaticSample s1,s2;
	StaticSample::display();

	StaticSample *p1 = new StaticSample;
	StaticSample *p2 = new StaticSample;

	s1.display();
	delete p1;
	p1->display();

}
