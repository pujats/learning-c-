#include<iostream>
using namespace std;

void updateValue(int *ptr) {
    *ptr = 20;
}

int main() {
    int var = 10;
    updateValue(&var);
    cout << var;
    return 0;
}