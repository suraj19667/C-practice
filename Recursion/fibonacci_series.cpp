//Fibonacci series with the help of recurcion
#include<iostream>
using namespace std;

int sum(int n){

    if(n==0){
        return 0;
    }
    if(n==1 || n==2){
        return 1;
    }
    return sum(n-1)+sum(n-2);
}

int main(){
    
    for(int i=0;i<=5;i++){
        cout<<sum(i)<<" ";
    }
}