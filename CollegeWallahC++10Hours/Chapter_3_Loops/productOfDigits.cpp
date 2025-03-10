// HW : WAP to print product of digits of a given 
// number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int product = 1;
    while(n!=0){
        int ld = n%10;
        product *= ld;
        n = n/10;
    }
    cout<<"Product of digits is : "<<product;
}