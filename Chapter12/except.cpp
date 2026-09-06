#include <iostream>
using namespace std;
// int divide(int x, int y) {
//     if (y == 0) 
//         throw x;
//     return x / y;
// }

// int main() {
//     try {
//         cout << "5 / 2 = " << divide(5, 2) << endl;
//         cout << "8 / 0 = " << divide(8, 0) << endl;
//         cout << "7 / 1 = " << divide(7, 1) << endl;
//     } catch (int e) {
//         cout << e << " is divided by zero!" << endl;
//     }
//     cout << "That is ok." << endl;
//     return 0;
// }
// #include <string>
// class MyException {
// public:
//     MyException(const string &message) : message(message) {}
//     ~MyException() {}
//     const string &getMessage() const { return message; }
// private:
//     string message;
// };

// class Demo {
// public:
//     Demo() { cout << "Constructor of Demo" << endl; }
//     ~Demo() { cout << "Destructor of Demo" << endl; }
// };

// void func() {
//     Demo d;
//     cout << "Throw MyException in func()" << endl;
//     throw MyException("exception thrown by func()");
// }

// int main() {
//     cout << "In main function" << endl;
//     try {
//         func();
//     } catch (MyException& e) {
//         cout << "Caught an exception: " << 
//         e.getMessage() << endl;
//     }
//     cout << "Resume the excecution of main()" << endl;
//     return 0;
// }

#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

double area(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0)
        throw invalid_argument("the side length should be positive");
    if (a + b <= c || b + c <= a || c + a <= b)
        throw invalid_argument("the side length should fit the triangle inequation");
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;
    cout << "Please input the side lengths of a triangle: ";
    cin >> a >> b >> c;
    try {
        double s = area(a, b, c);
        cout << "Area: " << s << endl;
    } catch (exception &e) {
        cout << "Error: " << e.what() << endl; 
    }
    return 0;
}