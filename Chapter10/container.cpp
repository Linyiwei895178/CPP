#include <iostream>
#include <deque>
#include <list>
#include <iterator>
#include <stack>
#include <map>
using namespace std;

template <class T>
void printContainer(const char* msg, const T& s) {
    cout << msg << ": ";
    copy(s.begin(), s.end(), ostream_iterator<T>(cout, " "));
    cout << endl;
}

// int main() {
//     deque<int> s;
//     for (int i = 0; i < 10; i++) {
//         int x;
//         cin >> x;
//         s.push_front(x);
//     }

//     printContainer("deque at first", s);
//     list<int> l(s.rbegin(), s.rend());
//     printContainer("list at first", l);
//     list<int>::iterator iter = l.begin();
//     while (iter != l.end()) {
//         int v = *iter;
//         iter = l.erase(iter);
//         l.insert(++iter, v);
//     }
//     printContainer("list at last", l);
//     s.assign(l.begin(), l.end());
//     printContainer("deque at last", s);
//     return 0;
// }

// int main()
// {
//     string names1[] = { "Alice", "Helen", "Lucy", "Susan"};
//     string names2[] = { "Bob", "David", "Levin", "Mike" };
//     list<string> s1(names1, names1 + 4);
//     list<string> s2(names2, names2 + 4);

//     s2.splice(s2.end(), s1, s1.begin());
//     list<string>::iterator iter1 = s1.begin();
//     advance(iter1, 2);
//     list<string>::iterator iter2 = s2.begin();
//     ++iter2;
//     list<string>::iterator iter3 = iter2;
//     advance(iter3, 2);
//     s1.splice(iter1, s2, iter2, iter3);
    
//     copy(s1.begin(), s1.end(), ostream_iterator<string>(cout, " "));
//     cout << endl;
//     copy(s2.begin(), s2.end(), ostream_iterator<string>(cout, " "));
//     cout << endl;
//     return 0;
// }

// int main()
// {
//     stack<char> s;
//     string str;
//     cin >> str;
//     for (string::iterator iter = str.begin(); iter != str.end(); ++iter) {
//         s.push(*iter);
//     }
//     while (!s.empty()) {
//         cout << s.top();
//         s.pop();
//     }
//     cout << endl;
//     return 0;
// }

// int main()
// {
//     map<string, int> courses;
//     courses.insert(make_pair("CSAPP", 3));
//     courses.insert(make_pair("C++", 4));
//     courses.insert(make_pair("CSARCH", 4));
//     courses.insert(make_pair("COMPILER", 4));
//     courses.insert(make_pair("OS", 5));
//     int n = 3;
//     int sum = 0;
//     while (n > 0) {
//         string name;
//         cin >> name;
//         map<string, int>::iterator iter = courses.find(name);
//         if (iter == courses.end()) {
//             cout << name << " is not found!" << endl;
//         } else {
//             sum += iter->second;
//             n--;
//         }
//     }
//     cout << "Total credits: " << sum << endl;
//     return 0;
// }

// int main() {
//     map<char, int> s;
//     char c;
//     do {
//         cin >> c;
//         if (isalpha(c)) {
//             c = tolower(c);
//             s[c]++;
//         }
//     } while (c != '.');
    
//     for (map<char, int>::iterator iter = s.begin(); iter !=s.end(); ++iter) {
//         cout << iter->first << " " << iter->second << " ";
//         cout << endl;
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// #include <map>
// #include <utility>
// #include <string>
// using namespace std;

// int main() {
//     multimap<string, string> courses;
//     typedef multimap<string, string>::iterator CourseIter;

//     courses.insert(make_pair("C++", "2-6"));
//     courses.insert(make_pair("COMPILER", "3-1"));
//     courses.insert(make_pair("COMPILER", "5-2"));
//     courses.insert(make_pair("OS", "1-2"));
//     courses.insert(make_pair("OS", "3-4"));
//     courses.insert(make_pair("OS", "5-5"));

//     string name;
//     int count;

//     do {
//         cin >> name;
//         count = courses.count(name);
//         if (count == 0) 
//             cout << "Cannot find this course!" << endl;
//     } while (count == 0);
//     cout << count << " lesson(s) per week: ";
//     pair<CourseIter, CourseIter> range = courses.equal_range(name);
//     for (CourseIter iter = range.first; iter != range.second; ++iter) {
//         cout << iter->second << " ";
//     }
//     cout << endl;
//     return 0;
// }

