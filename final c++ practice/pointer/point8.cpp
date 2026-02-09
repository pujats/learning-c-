// addition in pointers
#include<iostream>
using namespace std;
int main(){
    int a = 50;
    int*ptr = &a;
    cout<<" adress store in ptr = "<<ptr<<endl;
    ptr = ptr+1;
    cout<<"adding 1 to ptr = "<<ptr<<endl;
    ptr = ptr+2;
    cout<<"adding 2 to ptr = "<<ptr<<endl;
    return 0;
}