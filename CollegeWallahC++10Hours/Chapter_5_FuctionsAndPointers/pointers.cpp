#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int* p = &x;
    cout<<&x<<endl; // address of x 
    cout<<p<<endl; // address of x
    cout<<x<<endl; // value of x
    cout<<*p<<endl; // star operator-fetch the value(dereference operator)
    cout<<&p<<endl; // address of p
}