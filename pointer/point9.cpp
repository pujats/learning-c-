// substraction in pointer
#include<iostream>
using namespace std;
int main(){
    int a = 100;
    int*ptr = &a;
    cout<<" address store in ptr = "<<ptr<<endl;
    ptr = ptr-1;
    cout<<"subtract 1 from ptr = "<<ptr<<endl;
    return 0;
}