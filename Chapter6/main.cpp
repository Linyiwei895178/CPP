#include <iostream>
using namespace std;

// int main() {
//     int f[20] = {1, 1};
//     for (int i = 2; i < 20; i++) {
//         f[i] = f[i - 1] + f[i - 2];
//     }
//     for (int i = 0; i < 20; i++) {
//         if (i % 5 == 0) cout << endl;
//         cout.width(12);
//         cout << f[i];
//     }
//     return 0;
// }
// class Point {
// public:
//     Point();
//     Point(int x, int y);
//     ~Point();
//     void move(int newX, int newY);
//     int getX() const { return x; }
//     int getY() const { return y; }

// private:
//     int x, y;
// };

// Point::Point() {
//     x = y = 0;
//     cout << "Default Constructor called." << endl;
// }

// Point::Point(int x, int y) : x(x), y(y) {
//     cout << "Construtor called." << endl;
// }

// Point::~Point() {
//     cout << "Destructor called." << endl;
// }

// void Point::move(int newX, int newY) {
//     cout << "Moving the point to (" << newX << ", " << newY << ")" << endl;
//     x = newX;
//     y = newY;
// }

// int main()
// {
//     cout << "Entering main..." << endl;
//     Point a[2];
//     for (int i = 0; i < 2; i++)
//         a[i].move(i + 10, i + 20);
//     cout << "Exiting main..." << endl;
//     return 0;
// }

// void staticArrayInit(void);
// void automaticArrayInit(void);
// const int arraySize = 3;

// int main()
// {
//     cout << "First call to each function:\n";
//     staticArrayInit();
//     automaticArrayInit();
    
//     cout << "\n\nSecond call to each function:\n";
//     staticArrayInit();
//     automaticArrayInit();
//     cout << endl;
// }

// void staticArrayInit(void) {
//     static int array1[ arraySize ];

//     cout << "\nValues on entering staticArrayInit: \n";

//     for (int i = 0; i < arraySize; i++) {
//         cout << "array1[" << i << "]=" << array1[i] << " ";
//     }

//     cout << "\nValues on exiting staticArrayInit:\n";

//     for (int j = 0; j < arraySize; j++) {
//         cout << "array1[" << j << "] = " << ( array1[j] += 5) << " ";
//     }
// }

// int main() {
//     int i;
//     int *ptr = &i;
//     i = 10;
//     cout << "i = " << i << endl;

//     cout << "*ptr = " << *ptr << endl;

//     return 0;
// }

// int main()
// {
//     // !void voidObject;
//     void *pv;
//     int i = 5;
//     pv = &i;
//     int *pint = static_cast<int *>(pv);
//     cout << "*pint = " << *pint << endl;
//     return 0;
// }

// void splitFloat(float x, int *intPart, float *fracPart) {
//     *intPart = static_cast<int>(x);
//     *fracPart = x - *intPart;
// }

// int main()
// {
//     cout << "Enter 3 float point numbers: " << endl;
//     for (int i = 0; i < 3; i++) {
//         float x, f;
//         int n;
//         cin >> x;
//         splitFloat(x, &n, &f);
//         cout << "Integer Part = " << n 
//             << " Fraction Part = " << f << endl;
//     }
//     return 0;
// }

// const int N = 6;
// void print(const int *p, int n);
// int main() {
//     int array[N];
//     for (int i = 0; i < N; i++) cin >> array[i];
//     print(array, N);
//     return 0;
// }

// void print(const int *p, int n) {
//     cout << "{ " << *p;
//     for (int i = 1; i < n; i++)
//         cout << ", " << *(p + i);
//     cout << " }" << endl;
// }

//6 - 11
// void printStuff(float) {
//     cout << "this is the print stuff function." << endl;
// }

// void printMessage(float data) {
//     cout << "The data to be listed is " << data << endl;
// }

// void printFloat(float data) {
//     cout << "the data to be printed is " << data << endl;
// }

// const float PI = 3.14159f;
// const float TWO_PI = PI * 2.0f;

// int main()
// {
//     void (*functionPointer)(float);
//     printStuff(PI);
//     functionPointer = printStuff;
//     (*functionPointer)(PI);
//     functionPointer = printMessage;
//     functionPointer(TWO_PI);
//     functionPointer(13.0);
//     functionPointer = printFloat;
//     functionPointer(PI);
//     printFloat(PI);
//     return 0;
// }

// class Point {
// public:
//     Point(int x = 0, int y = 0) : x(x), y(y) {}
//     int getX() const { return x; }
//     int getY() const { return y; }
// private:
//     int x, y;
// };

// int main()
// {
//     Point a(4, 5);
//     Point *p1 = &a;
//     cout << p1->getX() << endl;
//     cout << p1->getY() << endl;
//     return 0;
// }

// //6 - 16
// #include <cassert>

// class Point {
// public:
//     Point() : x(0) , y(0) {
//         cout << "Default Constructor called. " << endl;
//     }
//     Point(int x, int y) : x(x), y(y) {
//         cout << "Constructor called." << endl;
//     }

//     ~Point() { cout << "Destructor called." << endl; }
//     int getX() const { return x; }
//     int getY() const { return y; }
//     void move(int newX, int newY) {
//         x = newX;
//         y = newY;
//     }
// private:
//     int x, y;
// };

// class ArrayOfPoints {
// public:
//     ArrayOfPoints(int size) : size(size) {
//         points = new Point[size];
//     }
//     ArrayOfPoints(const ArrayOfPoints& pointsArray);
//     ~ArrayOfPoints() {
//         cout << "Deleting..." << endl;
//         delete[] points;
//     }
//     Point& element(int index) {
//         assert(index >= 0 && index < size);
//         return points[index];
//     }

// private:
//     Point *points;
//     int size;
// };

// ArrayOfPoints::ArrayOfPoints(const ArrayOfPoints& v) {
//     size = v.size;
//     points = new Point[size];
//     for (int i = 0; i < size; i++) {
//         points[i] = v.points[i];
//     }
// };

// int main()
// {
//     // cout << "Step one: " << endl;
//     // Point *ptr1 = new Point;
//     // delete ptr1;

//     // cout << "Step two: " << endl;
//     // ptr1 = new Point(1, 2);
//     // delete ptr1;

//     int count;
//     cout << "Please enter the count of points: ";
//     cin >> count;
//     ArrayOfPoints points(count);
//     points.element(0).move(5, 0);
//     points.element(1).move(15, 20);
//     return 0;
// }

// #include <vector>

// double average(const vector<double> &arr) {
//     double sum = 0;
//     for (unsigned i = 0; i < arr.size(); i++)
//         sum += arr[i];
//     return sum / arr.size();
// }

// int main()
// {
//     unsigned n;
//     cout << "n = ";
//     cin >> n;

//     vector<double> arr(n);
//     cout << "Please input " << n << " real numbers: " << endl;
//     for (unsigned i = 0; i < n; i++)
//         cin >> arr[i];

//     cout << "Average = " << average(arr) << endl;
//     return 0;
// }

#include <string>
int main()
{
    for (int i = 0; i < 2; i++) {
        string city, state;
        getline(cin, city, ',');
        getline(cin, state);
        cout << "City: " << city << " State: " << state << endl;
    }
    return 0;
}