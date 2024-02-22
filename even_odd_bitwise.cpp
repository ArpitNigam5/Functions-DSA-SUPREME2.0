#include<iostream>
using namespace std;

// use (n&1==0) to check whether the no is even or not !

bool evenOdd(int n){
    if((n&1)==0){
        return true;
    }
    else{
        return false;
    }
}


int main(){

    int n;
    cin>>n;

    bool checkevenodd = evenOdd(n);

    if(checkevenodd){
        cout<<n<<" is even";
    }
    else{
        cout<<n<<" is odd";
    }
}