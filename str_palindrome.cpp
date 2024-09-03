#include<iostream>
#include<string>
using namespace std;
int main(){
    string str, rev_str;
    int i,n;
    cout<<"Enter the string to be checked: ";
    cin>>str;
    n = str.length();
    rev_str=str;
    for (i=0; i<n/2; i++){
        swap(rev_str[i], rev_str[n-1-i]);
    }
    cout<<rev_str;
    if(rev_str == str){
        cout<<" is a Palindrome";
    }else{
        cout<<" is Not a palindrome";
    }
    
}