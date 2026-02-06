// comparison to NULL
#include<iostream>
using namespace std;
int main(){
    int a = 50;
    int*ptr = NULL;
    ptr = &a;
    if(ptr == NULL){
        cout<<"no value is pointed";
    }else{
        cout<<*ptr;
    }
    return 0;
}