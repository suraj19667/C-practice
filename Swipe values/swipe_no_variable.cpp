//swipe without function and variable
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"a ="<<a<<endl<<"b ="<<b;
}