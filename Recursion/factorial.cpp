//factorial
#include<iostream>
using namespace std;
int sum(int n){
    if(n==1){
        return 0;
    }
    return n*sum(n-1);
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<sum(n);
}