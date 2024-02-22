#include<iostream>
using namespace std;

float areOfCircle(float radius){
    float area = 3.14 * radius * radius;
    return area;
}

int main(){
    
    int radius;
    cin>>radius;
    float area = areOfCircle(radius);
    cout<<"area is: "<<area;

}