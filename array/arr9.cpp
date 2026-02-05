#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    cout<<"arr: "<<arr<<endl;
    cout<<"arr+1: "<<arr+1<<endl;

    cout<<"&arr: "<<&arr<<endl;
    cout<<"&arr+1: "<<&arr+1<<endl;

    cout<<"arr[2]: "<<arr[2]<<endl;
    cout<<"*(arr+2): "<<*(arr+2)<<endl;
    return 0;
}