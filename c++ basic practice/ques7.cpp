// Find simple interest (P × R × T / 100).
#include<iostream>
using namespace std;
int main(){
    int p, r, t;
    cin>>p>>r>>t;
    int result = (p*r*t/100);
    cout<<"simple intrest = "<<result<<endl;
    return 0;
}