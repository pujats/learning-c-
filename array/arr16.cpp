// largest and smallest of an array with largest and smallest index
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {10, 20, -10, -30, 1};
    int size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int largestindex = 0;
    int smallestindex = 0;
    for(int i = 0; i<size; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            smallestindex = i;
        }
        if(arr[i]>largest){
            largest = arr[i];
            largestindex = i;
        }
    }
    cout<<"smallest = "<<smallest<<endl;
    cout<<"largest = "<<largest<<endl;

    cout<<"smallestindex = "<<smallestindex<<endl;
    cout<<"largestindex = "<<largestindex<<endl;
    return 0;
}