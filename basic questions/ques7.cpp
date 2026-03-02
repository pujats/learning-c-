// 7️⃣ Factorial of a Number
#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int fact = 1;
    for(int i = 1; i<=a; i++){
        fact = fact*i;
    }
    cout<<"factorial is :"<<fact;
    return 0;
}