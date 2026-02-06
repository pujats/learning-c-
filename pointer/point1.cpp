// print value and address
#include<iostream>
using namespace std;
int main(){
    int var = 10;
    int*ptr = &var;
    cout<<"value of var = "<<var<<endl;
    cout<<"address of var = "<<&var<<endl;
    cout<<"value stored in pointer ptr = "<<*ptr<<endl;
    cout<<"address stored in pointer ptr = "<<ptr<<endl;
    return 0;

}