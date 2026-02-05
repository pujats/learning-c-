#include<iostream>
using namespace std;
int main(){
    int arr[] = {2, 4, 8, 12, 16};
    int*ptr = arr;
    for(int i = 0; i<5; i++){
        cout<<*(ptr+i)<<" "<<endl;
    }
    return 0;
}