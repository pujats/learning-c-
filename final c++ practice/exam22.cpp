// Write a function to check even/odd
#include<iostream>
using namespace std;
void checkEvenOdd(int n){
    if(n% 2 == 0)
    cout<<"even";
else
cout<<"odd";
}
int main(){
    int n;
    cin>>n;
    checkEvenOdd(n);
    return 0;
}