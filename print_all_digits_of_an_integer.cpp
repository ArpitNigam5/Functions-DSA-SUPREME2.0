#include<iostream>
using namespace std;

int printalldigitsofaninteger(int n){
    
    while(n){
        int onesplace = n%10;
        cout<<"digit : "<<onesplace<<endl;
        n=n/10;
    }
    return n;
}
int main(){
    
    int n;
    cout<<"enter the digit: ";
    cin>>n;
    
    printalldigitsofaninteger(n);
    
}