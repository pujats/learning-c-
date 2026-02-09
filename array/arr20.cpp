#include<iostream>
using namespace std;
int main(){
    int*ptr = NULL;
    ptr = new int;
    *ptr = 7;
    cout<<*ptr;
    delete ptr;
    return 0;
    
}