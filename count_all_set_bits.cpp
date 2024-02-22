#include <iostream>
using namespace std;


int countSetbit(int n){
    
    // normal method : logic is --> 1) bit = n%2;
    // 2) if(bit==1) count++;
    // 3) n=n/2;

    int count=0;
    while(n>0){
        int bit = n%2;
        if(bit==1){
            count++;
        }
        n = n/2;
    }
    return count;
}

int countSetbitsbylsb(int n){
    //if we and (&) any number with 1 we get least significant bit of that number, for e.g binary of 7 is '111' the lsb will be 1. (7&1)

    // lcb method : logic is --> 1) bit = n&1;
    // 2) if(bit==1) count++;
    // 3) n=n>>1;

    int count = 0;
    while(n){ //n>0
    int bit = (n&1);
    if(bit==1){  //if(bit)
        count++;
    }
    n=n>>1;  //n>>=1
    }
    return count;
}

int main() {
    
   int n;
   cin>>n;
   
   int setBitcount = countSetbit(n);
   cout<<setBitcount<<endl;

   int setBitcountbylsb = countSetbitsbylsb(n);
   cout<<setBitcountbylsb<<endl;


    return 0;
}