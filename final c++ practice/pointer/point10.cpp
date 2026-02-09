// subtraction of two pointers of same datatype
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int*ptr1 = &arr[2];
    int*ptr2 = &arr[4];
    cout<<"ptr2- ptr1 = "<<ptr2-ptr1<<endl;
    return 0;
}