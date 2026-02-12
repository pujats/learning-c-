/* note - orignal value changes because function 
receive refrence */
#include<iostream>
using namespace std;
void modifyValue(int &x){
    x = x+10;
}
int main(){
    int a = 5;
    modifyValue(a);
    cout<<a;
    return 0;
}