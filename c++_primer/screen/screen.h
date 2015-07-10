/*
 * =====================================================================================
 *
 *       Filename:  screan.h
 *
 *    Description:  screan
 *
 *        Version:  1.0
 *        Created:  2014年06月20日 星期五 04時21分09秒 HKT
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (hgj), guojun0921@gmail.com
 *        Company:  pengbang
 *
 * =====================================================================================
 */
#include <string>
using namespace std;
class Screen
{
	public:
		void home();
		void move(int,int);
		char get();
		char get(int,int);
		bool checkRange(int,int);
		int height();
		int width();
	private:
		string _screen;
		string::size_type _cursor;
		short _height;
		short _width;
};

