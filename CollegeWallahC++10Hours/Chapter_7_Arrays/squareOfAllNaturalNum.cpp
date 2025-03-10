// HW : Given an integer n. Create an array containing 
// squares of all natural numbers till n and print the 
// elements of the array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
     
    // int square[n];
    // for(int i=1;i<=n;i++){
    //     cout<<i*i<<" ";
    // }

    int s[n];
    for(int i=1;i<=n;i++){
       s[i] = i*i;
    }
    for(int i=1;i<=n;i++){
        cout<<s[i]<<" ";
    }
    
    
}