#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter ist number : ";
    cin>>a;
    cout<<"enter 2nd number : ";
    cin>>b;
    cout<<"enter 3rd number : ";
    cin>>c;
    if(a<b && a<c){
        cout<<"The least of the three number is : "<<a;
    }
    else if(b<c && b<a){
        cout<<"The least of the three number is : "<<b;
    }
    else{
        cout<<"The least of the three number is : "<<c;
    }
}