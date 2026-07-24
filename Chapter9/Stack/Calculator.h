#pragma once
#include "Stack.h"

class Calculator {
private:
    Stack<double> s;
    void enter(double sum);

    bool getTwoOperands(double &opnd1, double &opnd2);

    void compute(char op);
public:
    void run();
    void clear();
};