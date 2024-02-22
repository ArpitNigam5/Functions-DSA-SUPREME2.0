#include<iostream>
using namespace std;


bool evenOdd(int n){
    if(n%2==0){
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