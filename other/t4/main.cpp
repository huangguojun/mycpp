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
#include <math.h>

using namespace std;

class Point
{
public:
        Point(double i, double j)
		{
			x = i;
			y = j;
		} 
        void print( ) const
        {
			cout << "(" << x << ", " << y << ")";
		}
private:
        double x;
        double y;
};

class Figure
{
public:
        Figure (double i = 0, double j = 0) :center(i, j){}
        
		Point& location( )
		{
			return center;
		}               

		void move(Point p)
		{
			center = p;
			draw( );
		}
        virtual void draw( ) = 0; // draw the figure
        virtual void rotate(double) = 0; 
		// rotate the figure by an angle                
private:
        Point center;
};

class Circle : public Figure
{
public:
        Circle(double i = 0, double j = 0, double r = 0) : Figure(i, j)
		{
			radius = r;
		}

        void draw( )
        {
            cout << "A circle with center ";
            location( ).print( );
            cout << " and radius " << radius << endl;
        }

        void rotate(double)
        {
                cout << "no effect.\n";
        }        // must be defined
private:
        double radius;
};


class Square : public Figure
{
public:
        Square(double i = 0, double j = 0, double d = 0, double a = 0):Figure(i,j)  
		{
			 side = d;
			 angle = a; 
		}
        void draw()
        {
                cout << "A square with center ";
                location( ).print( );
                cout << " side length " << side << ".\n"  
                << "The angle between one side and the X-axis is " << angle << endl;
        }
        void rotate(double a)
        {
               angle += a;
                cout << "The angle between one side and the X-axis is " << angle << endl;
        }
        void vertices( )
        {
                cout << "The vertices of the square are:\n";
                // calculate coordinates of the vertices of the square
          }
private:
        double side;        // length of the side
        double angle;        // the angle between a side and the x-axis
};

int main( )
{
        Circle c(1, 2, 3);
        Square s(4, 5, 6);
        Figure *f = &c;
		Figure *g = &s;
        f -> draw( );
        f -> move(Point(2, 2));
        g->draw( );
        g->rotate(1);
        
		s.vertices( );
        return 0;
}
