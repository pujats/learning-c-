// smallest and largest values of an array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i = 0; i<size; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"smallest = "<<smallest<<endl;
    cout<<"largest = "<<largest<<endl;
    return 0;
}