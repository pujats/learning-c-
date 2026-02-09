// Print multiplication "table: pahara" of N
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i = 1; i<=10; i++){
        cout<<n<<"x"<<i<<" = "<<n*i<<endl;
    }
    return 0;
}