// modifying adress stored in pointer by pointer
#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    int*ptr = &a;
    cout<<"address stored in pointer ptr = "<<ptr<<endl;
    ptr = &b;
    cout<<"adress stored in pointer ptr = "<<ptr<<endl;
    return 0;
}