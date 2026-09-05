#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

// int main() {
//     int intArr[] = {30, 90, 10, 40, 70, 50, 20, 80};
//     const int N = sizeof(intArr) /sizeof(int);
//     vector<int> a(intArr, intArr + N);
//     vector<int>::iterator p = find_if(a.begin(), a.end(), 
//     bind2nd(greater<int>(), 40));
//     if (p != a.end()) {
//         cout << "no element greater than 40" << endl;
//     } else {
//         cout << "first element greater than 40 is: " << *p << endl;
//     }
//     return 0;
// }

// bool g(int x, int y) {
//     return x > y;
// }

// int main()
// {
//     int intArr[] = { 30, 90, 10, 40, 70, 50, 20, 80 };
//     const int N = sizeof(intArr) / sizeof(int);
//     vector<int> a(intArr, intArr + N);

//     vector<int>::iterator p;
//     p = find_if(a.begin(), a.end(), bind2nd(ptr_fun(g), 40));

//     if (p == a.end()) {
//         cout << "no element greater than 40" << endl;
//     } else {
//         cout << "first element greater than 40 is: " << *p << endl;
//     }
//     p = find_if(a.begin(), a.end(), bind2nd(not2(greater<int>()), 15));
//     if (p == a.end()) {
//         cout << "no element is not greater than 15" << endl;
//     } else {
//         cout << "first element that is not greater than 15 is: "  << *p << endl;
//     }    

//     p = find_if(a.begin(), a.end(), not1(bind2nd(greater<int>(), 15)));
//     if (p == a.end()) {
//         cout << "no element is not greater than 15" << endl;
//     } else {
//         cout << "first element that is not greater than 15 is: " << *p << endl;
//     }
//     return 0;
// }

#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// struct Car {
//     int id;
//     Car(int id) { this->id = id; }
//     void display() const {
//         cout << "car " << id << endl;
//     }
// };

// int main() {
//     vector<Car *> pcars;
//     vector<Car> cars;

//     for (int i = 0; i < 5; i++) {
//         pcars.push_back(new Car(i));
//     }
//     for (int i = 5; i < 10; i++) {
//         cars.push_back(Car(i));
//     }
//     cout << "elements in pcars: " << endl;
//     for_each(pcars.begin(), pcars.end(), std::mem_fn(&Car::display));
//     cout << endl;

//     cout << "elements in cars: " << endl;
//     for_each(cars.begin(), cars.end(), std::mem_fn(&Car::display));
//     cout << endl;

//     for (size_t i = 0; i < pcars.size(); ++i) 
//         delete pcars[i];

//     return 0;
// }

