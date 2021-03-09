/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description: c++11 thread test
 *
 *        Version:  1.0
 *        Created:  2017年04月07日 10时01分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guojun.huang (), guojun.huang@qq.com
 *        Company:  Marvoto
 *
 * =====================================================================================
 */


#include <iostream>
#include <vector>
#include <memory>

using namespace std;

/*
int main()
{
    std::shared_ptr<double> p_first(new double);

    {
        std::shared_ptr<double> p_copy = p_first;

        *p_copy = 21.2;

    } // 此時'p_copy'會被銷毀，但動態分配的double不會被銷毀。

    return 0; // 此時'p_first'會被銷毀，動態分配的double也會被銷毀（因為不再有指針指向它）。
}
*/


class Base
{
public:
    virtual void show() = 0;
};

class A : public Base
{
public:
    virtual void show() { std::cout << "A show\n"; }
};

class B : public Base
{
public:
    virtual void show() { std::cout << "B show\n"; }
};


int main()
{
    std::vector<std::shared_ptr<Base> > pBaseVec;
    std::shared_ptr<Base> pA = std::make_shared<A>();
    std::shared_ptr<Base> pB = std::make_shared<B>();
    pBaseVec.push_back(pA);
    pBaseVec.push_back(pB);
    for (auto pBase : pBaseVec) {
        pBase->show();
    }

    return 0;
}

