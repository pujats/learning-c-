// comparision of pointers
#include<iostream>
using namespace std;
int main(){
    int a = 50;
    int*ptr1 = &a;
    int**ptr2 = &ptr1;
    int*ptr3 = *ptr2;
    if(ptr1 == ptr3){
        cout<<"both point to same memory location";
    }else{
        cout<<"ptr1 points to: "<<ptr1<<endl;
        cout<<"ptr3 points to: "<<ptr3;
        return 0;
    }
}