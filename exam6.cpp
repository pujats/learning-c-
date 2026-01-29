#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i<5; i++){
        if(i == 3)
        continue;
    // continue statement will skip the current iteration
    //  when i is 3 and it is true , so it will not print 3
        cout<<i<<" ";
    }
    return 0;
}