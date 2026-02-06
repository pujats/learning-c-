// direct access the pointer give adress stored in pointer
#include<iostream>
using namespace std;
int main(){
    int var = 10;
    int*ptr = &var;
    cout<<"direct access the pointer = "<<ptr<<endl;
    return 0;
}