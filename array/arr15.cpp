// input of an array
#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int arr[size];
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}