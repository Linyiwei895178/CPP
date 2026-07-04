#include "LinearEqu.h"
#include <iostream>
using namespace std;

int main()
{
    double a[] = {
        0.2368, 0.2471, 0.2568, 1.2671, //第一行
        0.1968, 0.2071, 1.2168, 0.2271, //第二行
        0.1581, 1.1675, 0.1768, 0.1871, //第三行
        1.1161, 0.1254, 0.1397, 0.1490
    };
    double b[] = { 1.8471, 1.7471, 1.6471, 1.5471 };
    LinearEqu equ(4);
    equ.setLinearEqu(a, b);
    equ.printLinearEqu();
    if (equ.solve())
        equ.printSolution();
    else
        cout << "Fail" << endl;
    return 0;
}
