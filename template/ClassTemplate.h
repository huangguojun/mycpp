/*
 * =====================================================================================
 *
 *       Filename:  ClassTemplate.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年03月01日 14时44分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (), guojun.huang@qq.com
 *        Company:  Marvoto
 *
 * =====================================================================================
 */

#ifndef ClassTemplate_HH
#define ClassTemplate_HH

template<typename T1,typename T2>
class myClass{
	public:
		myClass(T1 a, T2 b);
		void show();
	private:
		T1 I;
		T2 J;

};
#endif //ClassTemplate_HH
