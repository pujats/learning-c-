// Swap two numbers (without using swap function).
#include<iostream>
using namespace std;
int main(){
    int a = 22;
    int b = 33;
    // int temp;
    // temp = a;
    // a = b;
    // b = temp;
    // OR
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"after swap a = "<<a<<", b = "<<b;
    return 0;
}