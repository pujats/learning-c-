#include<iostream>
using namespace std;
int main(){
    int x = 10;
    if(x == 10){
        goto label;
    }
    cout<<"Hello"<<" ";
    // here if x is 10 and it is true value then it will jump
    //  to label and skip the cout statement and only print world
    //  do not check hello

    label:
    cout<<"World";
    return 0;
}