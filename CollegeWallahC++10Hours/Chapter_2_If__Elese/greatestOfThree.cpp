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
    if(a>b && a>c){
        cout<<a<<" is greater";
    }
    else if(b>c && b>a){
        cout<<b<<" is greater";
    }
    else{
        cout<<c<<" is greater";
    }
}