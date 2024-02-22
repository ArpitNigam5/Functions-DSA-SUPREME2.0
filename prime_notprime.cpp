#include<iostream>
using namespace std;

// the more optimistic solution is that you can use (sqrt(n)).

bool checkPrime(int n){

    int i=2;
    for(i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){

    int n;
    cin>>n;

    bool checkprime = checkPrime(n);

    if(checkprime){
        cout<<n<<" is prime";
    }
    else{
        cout<<n<<" is not a prime";
    }
}