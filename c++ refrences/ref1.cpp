#include<iostream>
using namespace std;
int main(){
    int x = 50;
    int& ref = x;
    cout<<ref<<endl;
    ref = 55;
    cout<<ref;
    return 0;
}