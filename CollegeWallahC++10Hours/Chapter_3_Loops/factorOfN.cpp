#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    //factor of n.
    // for(int i=1;i<=n;i++){
    //     if(n%i==0) cout<<i<<" ";
    // }

    //highest factor.
    // int f = 1; // store karunga highest factor
    // for(int i=1;i<n;i++){
    //     if(n%i==0) f = i;
    // }
    // cout<<f;

    // int f = 1;
    // for(int i=1;i<=n/2;i++){
    //     if(n%i==0) f = i;
    // }
    // cout<<f;

    // for(int i=n/2;i>=1;i--){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    // }

    for(int i=n/2;i>=1;i--){
        if(n%i==0){
            cout<<i<<" ";
            break; // to get out of the loop
        }
    }
}