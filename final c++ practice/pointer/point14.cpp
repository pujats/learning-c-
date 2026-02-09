#include<iostream>
using namespace std;
int main(){
    int arr[3] = {1, 2, 3};
    int*ptr = arr;
    *(ptr+1)= *(ptr + 1)+5;
    ptr++;
    *ptr = *(ptr-1)+5;
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    return 0;
}