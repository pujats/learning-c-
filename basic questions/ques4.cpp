// 4️⃣ Largest of Two Numbers
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    if(a>b){
        cout<<"larger number is :"<<a;
    } else if(a<b){
        cout<<"larger number is :"<<b;
    } else{
        cout<<"both numbers are equal";
    }
    return 0;
}