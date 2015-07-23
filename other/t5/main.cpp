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


class Base 
{
public:
    Base(int x)
    {
        i = x;
    }
protected:
    int i;
};

class Derived : public Base
{
public:
    Derived(int x, int y):Base(x)
    {
        i = y;
    }
    void print()
    {
        cout << i + Base::i << endl;
    }
private:
    int i;
};

int main()
{
    Derived A(2,3);
    A.print();
    return 0;
}
