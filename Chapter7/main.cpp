#include <iostream>
using namespace std;
// class Point {
// public:
//     void initPoint(float x = 0, float y = 0)
//     { this->x = x; this->y = y; }

//     void move(float offX, float offY)
//     { x += offX; y += offY; }
//     float getX() const { return x; }
//     float getY() const { return y; }
// private:
//     float x, y;
// };

// class Rectangle : public Point {
// public:
//     void initRectangle(float x, float y, float w, float h) {
//         initPoint(x, y);
//         this->w = w;
//         this->h = h;
//     }
//     float getH() const { return h; }
//     float getW() const { return w; }
// private:
//     float w, h;
// };

// int main()
// {
//     Rectangle rect;
//     rect.initRectangle(2, 3, 20, 10);
//     rect.move(3, 2);
//     cout << "The data of rect(x, y, w, h): " << endl;
//     cout << rect.getX() << ", " << rect.getY() << ", " << rect.getW() << ", " << rect.getH();
//     return 0;
// }

//7 - 3
// class Base1 {
// public:
//     void display() const {
//         cout << "Base1::display()" << endl;
//     }
// };

// class Base2 : public Base1 {
// public:
//     void display() const {
//         cout << "Base2::display()" << endl;
//     }
// };

// class Derived : public Base2 {
// public:
//     void display() const {
//         cout << "Derived::display()" << endl;
//     }
// };

// void fun(Base1 *ptr) {
//     ptr->display();
// }

// int main()
// {
//     Base1 base1;
//     Base2 base2;
//     Derived derived;

//     fun(&base1);
//     fun(&base2);
//     fun(&derived);

//     return 0;
// }

// class Base1 {
// public:
//     Base1(int i) { cout << "Constructing Base1 " << i << endl; }
//     ~Base1() { cout << "Destructing Base1 " << endl; }
// };

// class Base2 {
// public:
//     Base2(int j) { cout << "Constructing Base2 " << j << endl; }
//     ~Base2() { cout << "Destructing Base2 " << endl; }
// };

// class Base3 {
// public:
//     Base3() { cout << "Constructing Base3 *" << endl; }
//     ~Base3() { cout << "Destructing Base3 " << endl; }
// };

// class Derived : public Base2, public Base1, public Base3 {
// public:
//     Derived(int a, int b, int c, int d) : Base1(a), member2(d), member1(c), Base2(b) {}
// private:
//     Base1 member1;
//     Base2 member2;
//     Base3 member3;
// };

// int main()
// {
//     Derived obj(1, 2, 3, 4);
//     return 0;
// }
class Base0 {
public:
    int var0;
    void fun0() { cout << "Member of Base0" << endl; }
};

class Base1 : virtual public Base0 {
public:
    int var;
    void fun() { cout << "Member of Base1 " << endl; }
};

class Base2 : virtual public Base0 {
public:
    int var;
    void fun() { cout << "Memeber of Base2 " << endl; }
};

class Derived : public Base1, public Base2 {
public:
    int var;
    void fun() {cout << "Member of Derived" << endl; }
};

int main()
{
    Derived d;
    Derived *p = &d;

    // d.var = 1;
    // d.fun();

    // d.Base1::var = 2;
    // d.Base1::fun();

    // p->Base2::var = 3;
    // p->Base2::fun();

    d.var0 = 2;
    d.fun0();
    return 0;
}