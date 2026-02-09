/*Sum of first N natural numbers
 Operation- sum
 Start Value- 0
 Reason- identity of addition*/ 
#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int sum = 0;
    for(int i = 1; i<=N; i++){
        sum += i;
         }
         cout<<sum<<endl;
    return 0;
}