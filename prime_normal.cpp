#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    bool isprime = true;
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=false;
        }
    }
    if(isprime){
        cout<<n<<" is prime";
    }
    else{
        cout<<n<<" is not a prime";
    }
    
}