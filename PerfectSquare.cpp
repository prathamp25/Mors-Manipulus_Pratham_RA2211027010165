#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x;
    float y;
    cout<<"Enter a number to check if it is a perfect square: ";
    cin>>x;
    y= sqrt(x);
    cout<<"The square root of the given number: "<<y<<endl;
    if (y*y == x){
        cout << "The give number is a perfect square.";
    }else{
        cout<<"The number is not a perfect square.";
    }
    return 0;

}