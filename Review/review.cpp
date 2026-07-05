// #include <iostream>
// using namespace std;

// void fac(int num) {
//     // code 1
//     if (num == 0 || num == 1) {
//         throw 1;
//     }
//     try {
//         fac(num - 1);
//     } catch (int res) {
//         throw num * res;
//     }
// }

// int main()
// {
//     try {
//         fac(5);
//     } catch (int res) {
//         cout << res << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class B
// {
// public:
//     B() {}
//     B(int i) {b=i;}
//     virtual void virfun()
//     {cout<<"B::virfun() called.\n";}
// private:
//     int b;
// };
// class D:public B
// {
// public:
//     D(){}
//     D(int i,int j):B(i){d=j;}
// private:
//     int d;
//     void virfun()
//     {cout<<"D::virfun() called.\n";}
// };
// void fun(B *obj)
// {
//     obj->virfun();
// }
// int main()
// {
//     B *pb=new B;
//     fun(pb);
//     D *pd=new D;
//     fun(pd);
//     pb=pd;
//     fun(pb);
//     pd=dynamic_cast<D*>(pb);
//     fun(pd);
// }

// #include <iostream>
// using namespace std;
// struct A
// {
//     A(int id) { cout << "A " <<id<<endl;}
// };
// struct B
// {
//     B(int id) { cout << "B " <<id<<endl;}
// };
// struct D : public B, virtual public A
// {
//     B b;
//     A a;
//     D():a(1), b(1), B(2), A(2) { }
// };
// int main() {
//     D d;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Object
// {
//     int _id;
// public:
//     Object(int id=0):_id(id) { cout<< "C " <<_id<<endl;}
//     Object(const Object &r)
//         :_id(r._id)
//     { cout<< "M " <<_id<<endl; }
//     ~Object() {cout<< "D " <<_id<<endl;}
// };

// Object* func(Object &a, Object b)
// {
//     static Object s=a;
//     return &s;
// }
// int main()
// {
//     Object a(1), b;
//     Object &c(*func(a, b));
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Object
// {
//     int _id;
// public:
//     Object(int id) :_id(id) {
//         if(_id<0) throw "invalid argument ";
//         cout<<"C"<<_id<<endl;}

//     ~Object() { cout << "D" <<_id<<endl; }
// };

// int main()
// {
//     try{
//         Object a(1), b(-1), c(2);
//     }
//     catch( const char *err ) {
//         cout<<err<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Vehicle {
// protected:
//     int wheels;
//     double weight;
// public:
//     Vehicle(int w, double wt) : wheels(w), weight(wt) {}
//     virtual ~Vehicle() {}

//     virtual void show() const {
//         cout << "the wheels number is " << wheels << " and the car weight is
//         " << weight;
//     }
// };

// class Car : public Vehicle {
// private:
//     int load;
// public:
//     Car(int w, double wt, int ld) : Vehicle(w, wt), load(ld) {}
//     ~Car() {}

//     void show() const override {
//         cout << "the wheels number is " << wheels << " the weight number is "
//         << weight
//                 << " the load people number is " << load << endl;
//     }
// };

// class Truck : public Vehicle {
// private:
//     int load;
//     double payload;
// public:
//     Truck(int w, double wt, int ld, double pd) : Vehicle(w, wt), load(ld),
//     payload(pd) {} ~Truck() {}

//     void show() const override {
//         cout << "the wheels number is " << wheels << " the weight number is "
//         << weight
//                 << " the load is " << load << " the payload number is " <<
//                 payload << endl;
//     }
// };

// int main()
// {
//     Car mycar(4, 1.5, 6);
//     mycar.show();
//     Truck mytruck(6, 4.5, 3, 12.0);
//     mytruck.show();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // 基类 Vehicle
// class Vehicle {
// protected: // 使用 protected 确保派生类可以直接访问核心属性
//     int wheels;
//     double weight;
// public:
//     Vehicle(int w, double wt) : wheels(w), weight(wt) {}
//     virtual ~Vehicle() {} // 核心规范：基类必须声明虚析构函数，防止内存泄漏

//     virtual void show() const {
//         cout << "车轮数: " << wheels << ", 车重: " << weight << " 吨";
//     }
// };

// // 派生类 Car
// class Car : public Vehicle {
// private:
//     int passengers;
// public:
//     // 派生类构造函数：必须显式调用基类的构造函数来初始化基类部分
//     Car(int w, double wt, int p) : Vehicle(w, wt), passengers(p) {}

//     void show() const override { // 显式使用 override
//     关键字确保虚函数覆写正确
//         cout << "【小轿车】";
//         Vehicle::show(); // 调用基类的 show() 函数复用代码
//         cout << ", 载客数: " << passengers << " 人" << endl;
//     }
// };

// // 派生类 Truck
// class Truck : public Vehicle {
// private:
//     int passengers;
//     double payload;
// public:
//     Truck(int w, double wt, int p, double pl)
//         : Vehicle(w, wt), passengers(p), payload(pl) {}

//     void show() const override {
//         cout << "【卡车】";
//         Vehicle::show();
//         cout << ", 载客数: " << passengers << " 人, 载重量: " << payload << "
//         吨" << endl;
//     }
// };

// int main() {
//     // 测试对象建立与属性显示
//     Car myCar(4, 1.6, 5);
//     myCar.show();

//     Truck myTruck(6, 4.5, 3, 12.0);
//     myTruck.show();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Three_d {
// private:
//     int x, y, z;
// public:
//     Three_d(int i = 0, int j = 0, int k = 0) : x(i), y(j), z(k) {}

//     Three_d& operator++() {
//         ++x; ++y; ++z;
//         return *this;
//     }

//     Three_d& operator++(int) {
//         x++; y++; z++;
//         return *this;
//     }

//     Three_d& operator--() {
//         --x; --y; --z;
//         return *this;
//     }

//     Three_d& operator--(int) {
//         x--; y--; z--;
//         return *this;
//     }

//     void display() {
//         cout << x << " " << y << " " << z << endl;
//     }
// };

// int main()
// {
//     Three_d my(1, 1, 1);
//     my++;
//     my.display();
//     my--;
//     my.display();
//     --my;
//     my.display();
//     ++my;
//     my.display();
//     return 0;
// }

#include <iostream>
using namespace std;

class Three_d {
private:
    int x, y, z;
public:
    Three_d(int i = 0, int j = 0, int k = 0) : x(i), y(j), z(k) {}

    // 1. 前缀自增 (++obj) ：先改变对象状态，再返回修改后的对象自身引用
    Three_d &operator++() {
        ++x; ++y; ++z;
        return *this; // 返回自身引用
    }

    // 2. 后缀自增 (obj++) ：利用“哑元(int)”与前缀区分。先保存旧状态，再修改，最后返回旧状态副本
    Three_d operator++(int) {
        Three_d temp = *this; // 拷贝保存原状态
        ++x; ++y; ++z;        // 修改当前对象
        return temp;          // 返回原状态的临时副本（必须以“值”形式返回）
    }

    // 3. 前缀自减 (--obj)
    Three_d &operator--() {
        --x; --y; --z;
        return *this;
    }

    // 4. 后缀自减 (obj--)
    Three_d operator--(int) {
        Three_d temp = *this;
        --x; --y; --z;
        return temp;
    }

    void display() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Three_d point(10, 20, 30);
    
    cout << "初始坐标: ";
    point.display();

    cout << "执行前缀 ++point: ";
    (++point).display();

    cout << "执行后缀 point++ (输出的应为自增前的值): ";
    (point++).display();
    
    cout << "后缀自增执行完毕后 point 的当前状态: ";
    point.display();

    cout << "执行前缀 --point: ";
    (--point).display();

    return 0;
}