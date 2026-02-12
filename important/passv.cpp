// pass by value
#include<iostream>
using namespace std;
void update(int x){
    x = 100;
}
int main(){
    int a = 5;
    update(a);
    cout<<a;
    return 0;
}