// Write a C++ program to reverse a given number.
#include<iostream>
using namespace std;
int main(){
    int num, reverse = 0, digit;
    cout<<"enter a number: ";
    cin>>num;
    while(num != 0){
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num/10; 
    }
    cout<<" reverse num is: "<<reverse;
    return 0;

}