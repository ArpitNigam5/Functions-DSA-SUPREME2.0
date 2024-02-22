
// this code runs only for single digit no.

#include<iostream>
using namespace std;

int createnumberusingdigits(int numberofdigits){
    
    int num=0;
    for(int i=0;i<numberofdigits;i++){
        int digit;
        cin>>digit;
        num=num*10+digit;
        cout<<"the number of digit print so far: "<<num<<endl;
    }
    return num;
}
int main(){
    
    int numberofdigits;
    cin>>numberofdigits;
    
    int num = createnumberusingdigits(numberofdigits);
    cout<<endl;
    cout<<"the no of digits are: "<<num<<endl;
    
}