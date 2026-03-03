// check a positive integer n is even or odd
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n % 2 == 0){
        cout<<"true"<<endl;
    } else if(n % 2 != 0){
        cout<<"false"<<endl;
    }else{
        cout<<n;
    }
    return 0;

}