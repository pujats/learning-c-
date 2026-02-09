// refrence in c++
#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int& ref = x;
    cout<<ref<<endl;
    ref = 20;
    cout<<ref;
    return 0;

}