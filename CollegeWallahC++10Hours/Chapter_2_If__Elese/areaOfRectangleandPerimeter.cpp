// HW : Given the length and breadth of a rectangle, 
// write a program to find whether the area of the 
// rectangle is greater than its perimeter.
#include<iostream>
using namespace std;
int main(){
    float l,b,Area,Perimeter;

    cout<<"Enter the length : ";
    cin>>l;
    cout<<"Enter the breadth : ";
    cin>>b;

    Area = l*b;
    Perimeter = 2*(l+b);

    if(Area>Perimeter){
        cout<<"The area of the rectangle is greater than its perimeter ";
    }
    else{
        cout<<"The area of the rectangle is not greater than its perimeter ";
    }
}