#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int* p = &a;
    cout<<*p;
    // The * operator also called the dereference operator
    //  is used to dereference the pointer p, which means
    //  it accesses the value stored at the address p points to.
    //  Since p points to a, and a holds the value 5, 
    // *p outputs 5.
    return 0;
}