/*Operation-Factorial 
Start Value- 1
Reason- identity of multiplication*/ 
// question- Factorial of a number N
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }
    cout<<fact;
    return 0;
}

