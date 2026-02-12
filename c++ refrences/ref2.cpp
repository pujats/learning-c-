//(1) passing arguments by refrence
#include<iostream>
using namespace std;
void modifyValue(int &x){
    x = 50;
}
int main(){
    int a = 10;
    modifyValue(a);
    cout<<a;
    return 0;
}