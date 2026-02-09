#include<iostream>
using namespace std;
int main(){
    int marks[5] = {1, 2, 3, 4, 5};
    int sz = 5;
    cout<<sizeof(marks)<<endl;
    /* bcz 1 box store 4 bytes memory so 
    total 5 boxes store 5*4 = 20 bytes memory */
    return 0;
}