/*
 * =====================================================================================
 *
 *       Filename:  int_array.h
 *
 *    Description:  IntArray
 *
 *        Version:  1.0
 *        Created:  2014年06月16日 星期一 09時45分18秒 HKT
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (hgj), guojun0921@gmail.com
 *        Company:  pengbang
 *
 * =====================================================================================
 */

#ifndef INT_ARRAY_H
#define INT_ARRAY_H

class IntArray{

	public:
		explicit IntArray (int sz = 100);
		IntArray(const int *array ,int array_size);
		IntArray(const IntArray &rhs);
		virtual ~IntArray();

		bool operator==(const IntArray&) const;
		bool operator!=(const IntArray&) const;
		IntArray& operator=(const IntArray&);
		inline int size() const;

		virtual int & operator[](int index);
		virtual void sort();
		virtual int min() const;
		virtual int max() const;
		virtual int find(int value) const;
	protected:
		static const int DefaultArraySize = 12;
		void init(int sz,const int *array);
		int _size;
		int *ia;

};


#endif // INT_ARRAY_H
