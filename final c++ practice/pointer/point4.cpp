// modifying value stored in pointer using pointer
#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    int*ptr = &a;
    cout<<"value stored in pointer ptr = "<<*ptr<<endl;
    // change the value after using ptr = &b;
    ptr = &b;
    cout<<"value stored in pointer ptr = "<<*ptr<<endl;
    return 0;
}