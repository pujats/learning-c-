// 1️⃣ Reverse a number (using while loop)
#include<iostream>
using namespace std;
int main(){
    int num = 456, reverse = 0, digit;
    cout<<"number is: "<<num<<endl;
    while( num != 0){
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num/10;
    }
    cout<<"reverse num is: "<<reverse;
    return 0;

}