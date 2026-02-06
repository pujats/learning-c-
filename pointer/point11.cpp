// pointers to pointers:-double pointer
#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int*ptr1 = &a;
    // ptr1 store the adress of a
    int**ptr2 = &ptr1;
    // ptr2 store the adress of ptr1
    cout<<"value of a pointed by ptr1 = "<<*ptr1<<endl;
    cout<<"value of ptr1 pointed by ptr2 = "<<**ptr2;
    return 0; 
}
