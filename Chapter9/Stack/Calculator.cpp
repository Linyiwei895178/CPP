#include "Calculator.h"
#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

inline double stringToDouble(const string &str) {
    istringstream stream(str);
    double result;
    stream >> result;
    return result;
}

void Calculator::enter(double num) {
    s.push(num);
}

bool Calculator::getTwoOperands(double &opnd1, double &opnd2) {
    if (s.isEmpty()) {
        cerr << "Missing right operand!" << endl;
        return false;
    }
    opnd1 = s.pop();

    if (s.isEmpty()) {
        cerr << "Missing left operand!" << endl;
    }
    opnd2 = s.pop();
    
    return true;
}

void Calculator::compute(char op) {
    double operand1, operand2;
    bool result = getTwoOperands(operand1, operand2);

    if (result) {
        switch(op) {
            case '+': s.push(operand1 + operand2); break;
            case '-': s.push(operand2 - operand1); break;
            case '*': s.push(operand2 * operand1); break;
            case '/': 
                if (operand1 == 0) {
                    cerr << "Divided by 0!" << endl;
                    s.clear();
                } else {
                    s.push(operand2 / operand1);
                }
                break;
            case '^': s.push(pow(operand2, operand1)); break;
            default:
                cerr << "Unrecognized operator!" << endl;
                break;
            }
        cout << "= " << s.peek() << " ";
    } else 
        s.clear();
}

void Calculator::run() {
    string str;
    while (cin >> str, str != "q") {
        switch(str[0]) {
            case 'c': s.clear(); break;
            case '-': 
                if (str.size() > 1) 
                    enter(stringToDouble(str)); 
                else  
                    compute(str[0]);
                break;
            case '+':
            case '*':
            case '/':
            case '^':
                compute(str[0]);
                break;
            default:
                enter(stringToDouble(str)); break;
        }
    }
}

void Calculator::clear() {
    s.clear();
}