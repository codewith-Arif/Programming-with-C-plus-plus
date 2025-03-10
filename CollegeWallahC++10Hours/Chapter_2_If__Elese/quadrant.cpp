// HW: Given a point (x, y), write a program to find 
// out if it lies in the 1st Quadrant, 2nd Quadrant, 3rd 
// Quadrant, 4th Quadrant, on the x-axis, y-axis or at 
// the origin, viz. (0, 0). 
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the quadrant (x,y) : ";
    cin>>x>>y;

    if(x==0 && y==0){
        cout<<"The point is at the origin";
    }
    else if(x==0 && y!=0){
        cout<<"The point lies on the y-axis";
    }
    else if(y==0 && x!=0){
        cout<<"The point lies on the x-axis";
    }
    else if(x>0 && y>0){
        cout<<"The point lies on the 1st Quadrant";
    }
    else if(x>0 && y>0){
        cout<<"The point lies on the 1st Quadrant";
    }
    else if(x<0 && y>0){
        cout<<"The point lies on the 2nd Quadrant";
    }
    else if(x<0 && y<0){
        cout<<"The point lies on the 3rd Quadrant";
    }
    else if(x>0 && y<0){
        cout<<"The point lies on the 4th Quadrant";
    }
}