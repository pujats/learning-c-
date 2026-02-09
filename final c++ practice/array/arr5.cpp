// smmalest value of an array
#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {12, 13, 14, 15, 16};
    int size = 5;
    int smallest = INT_MAX;
    for(int i = 0; i<size; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout<<"smallest = "<<smallest<<endl;
    return 0;
}