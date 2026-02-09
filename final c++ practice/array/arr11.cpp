#include<iostream>
using namespace std;
void modifyArray(int arr[], int size){
    for(int i = 0; i<size; i++){
     arr[i]+=5;
    }
    
}
int main(){
    int arr[3] = {1, 2, 3};
    modifyArray(arr, 3);
    for(int i = 0; i<3; i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}