// returning refrence from function
#include<iostream>
using namespace std;
int& getMax(int &a, int &b){
    if(a>b)
    return a;
else
return b;
}
int main (){
    int x = 5, y = 10;
    getMax(x, y) = 100;
    cout<<x<<" "<<y<<endl;
    return 0;
}