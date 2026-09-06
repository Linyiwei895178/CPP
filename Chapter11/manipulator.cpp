#include <iostream>
using namespace std;

// int main() {
//     double values[] = { 1.23, 35.36, 653.7, 4358.24 };
//     for (int i = 0; i < 4; i++) {
//         cout.width(10);
//         cout << values[i] << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// int main() {
//     double values[] = {1.23, 35.36, 653.7, 4358.24 };
//     string names[] = { "Zoot", "Jimmy", "AI", "Stan" };
//     for (int i = 0; i < 4; i++) {
//         cout << setw(6) << names[i] << setw(10) << values[i] << endl;
//     }
//     return 0;
// }

// template <class T>
// inline string toString(const T &v) {
//     ostringstream os;
//     os << v;
//     return os.str();
// }

// int main() {
//     string str1 = toString(5);
//     cout << str1 << endl;
//     string str2 = toString(1.2);
//     cout << str2 << endl;
//     return 0;
// }

template <class T>
inline T fromString(const string &str) {
    istringstream is(str);
    T v;
    is >> v;
    return v;
}

int main() {
    int v1 = fromString<int>("5");
    cout << v1 << endl;
    double v2 = fromString<double>("1.2");
    cout << v2 << endl;
    return 0;
}