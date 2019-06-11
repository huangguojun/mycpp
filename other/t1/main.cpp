/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  北京市第三交通委提醒您，道路千万条，安全第一条，代码不规范，运维两行泪			  
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
        Base( ){}
        Base(int i) {b_number = i ;}
        int get_number( ) {return b_number;}
        void print( ) {cout << b_number << endl;}        
private:
        int b_number;
};
 
class Derived : public Base
{
public:
        Derived( int i, int j ):Base(i) 
		{
			d_number = j; 
		};        
        void print( ) 
        {
                cout << get_number( ) << " ";        
                cout << d_number << endl;
        }
private:
        int d_number;
};

int main( )
{
        Base a(2);
        Derived b(3, 4);
        cout << "a is ";
        a.print( );                // print( ) in Base
        cout << "b is ";
        b.print( );                // print( ) in Derived
        cout << "base part of b is "; 
        b.Base::print( );                // print( ) in Base
        return 0;
}
