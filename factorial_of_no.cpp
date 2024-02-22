#include<iostream>
using namespace std;

// generally larger number factorial is find out with the help of strings, but if i want to store large number than i must use long long int....


int factorial(int n){

    int fact=1;

    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){

    int n;
    cin>>n;

    int fact = factorial(n);
    cout<<fact;
}
