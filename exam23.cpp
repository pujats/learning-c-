// Write a function to check prime number
#include<iostream>
using namespace std;
int primeNumber(int n){
    if(n <= 1)
       return 0 ;
    for(int i =2; i<n; i++){
        if(n % i == 0)
        return 1;
    }
    
}
int main(){
    int n;
    cin>>n;
    if(primeNumber(n) == 1){
        cout<<"prime number";
    }else {
        cout<<"not prime number";
    }
    return 0;
}