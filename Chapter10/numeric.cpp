#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int iarray[] = { 1, 2, 3, 4, 5 };
    vector<int> ivector(iarray, iarray + sizeof(iarray) / sizeof(int));

    cout << accumulate(ivector.begin(), ivector.end(), 0) << endl;

    cout << inner_product(ivector.begin(), ivector.end(), ivector.begin(), 10) << endl;

    partial_sum(ivector.begin(), ivector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    adjacent_difference(ivector.begin(), ivector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}

