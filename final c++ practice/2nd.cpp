#include <iostream>
#include <string>
using namespace std;

void dataTypes(int a, float b, double c, long long l, string d) {
    auto x = b / c;   // double
    auto y = b / a;   // float -> promoted
    auto z = c / a;   // double
    auto w = z + l;   // double

    cout << sizeof(x) << " "
         << sizeof(y) << " "
         << sizeof(z) << " "
         << sizeof(w) << endl;

    cout << sizeof(d) << " " << sizeof(d[3]);
}
