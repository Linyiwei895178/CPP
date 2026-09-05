// #include <iostream>
// #include <numeric>
// using namespace std;

// int mult(int x, int y) { return x * y; };

// int main() {
//     int a[] = { 1, 2, 3, 4, 5 };
//     const int N = sizeof(a) / sizeof(int);
//     cout << "The result by multipling all elements in a is " 
//     << accumulate(a, a + N, 1, mult) << endl;
//     return 0;
// }

// #include <iostream>
// #include <numeric>
// using namespace std;

// class MultiClass {
// public:
//     int operator()(int x, int y) const { return x * y; }
// };

// int main() {
//     int a[] = {1, 2, 3, 4, 5 };
//     const int N = sizeof(a) / sizeof(int);
//     cout << "The result by multipling all elements in a is " 
//     << accumulate(a, a + N, 1, MultiClass()) << endl;
//     return 0;
// }
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

// int main() {
//     int intArr[] = { 30, 90, 10, 40, 70, 50, 20, 80 };
//     const int N = sizeof(intArr) / sizeof(int);
//     vector<int> a(intArr, intArr + N);

//     cout << "before sorting: " << endl;
//     copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
//     cout << endl;

//     sort(a.begin(), a.end(), greater<int>());

//     cout << "after sorting: " << endl;
//     copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
//     cout << endl;
//     return 0;
// }

//lambda expression
// int main() {
//     auto sayHello = [] {
//         std::cout << "Hello, Lambda!" << std::endl;
//     };
    
//     sayHello();
//     return 0;
    // auto add = [](int a, int b) -> int {
    //     return a + b;
    // };

    // std::cout << "5 + 3 = " << add(5, 3) << std::endl;
    // return 0;

//     std::vector<int> numbers = {5, 2, 8, 1, 9};

//     int threshold = 4;

//     int count = std::count_if(numbers.begin(), numbers.end(), [threshold](int n) { 
//         return n > threshold;
//     });

//     std::cout << "greater than " << threshold  << ": " << count << std::endl;
//     return 0;
// }


