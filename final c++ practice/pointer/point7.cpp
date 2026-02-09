// increment and decrement of pointers
#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int*ptr = &a;
    cout<<"size of int = "<<sizeof(int)<<endl;
    cout<<"before increment = "<<ptr<<endl;
    ptr++;
    cout<<"after increment = "<<ptr<<endl;
    cout<<"before decrement = "<<ptr<<endl;
    ptr--;
    cout<<"after decrement = "<<ptr<<endl;
    return 0;

}
