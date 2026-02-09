// largest value of an array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int largest = INT_MIN;
    for(int i = 0; i<size; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"largest = "<<largest<<endl;
    return 0;

}