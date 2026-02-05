// reverse of an array using function
#include<iostream>
using namespace std;
void reverseArray(int arr[], int size){
    for(int i = size-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    reverseArray(arr, size);
    return 0;
}