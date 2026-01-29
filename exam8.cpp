#include<iostream>
using namespace std;
int main(){
    string name;
    getline(cin, name);
    // getline()function is used to read an entire line of text 
    // from the standard input
    //  into a string variable.
    //  It captures all characters until a newline is encountered, 
    // making it suitable for reading lines of text.
    cout <<name;
    return 0;   
}