// Array name itself is a pointer to the first element.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    // cout<<arr; same address as below given code both are equal
    cout<<&arr[0];
    return 0;
}