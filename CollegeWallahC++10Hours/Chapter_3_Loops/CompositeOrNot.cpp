#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    // for(int i=2;i<=n/2;i++){
    //     if(n%i==0){
    //         cout<<"Composite";
    //         break; // to get out of the loop
    //     }
    // }

    bool flag = true; //true means prime
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag = false; // false means composite
            break; // to get out ot the loop
        }
    }
    if(n==1) cout<<"Neighter Prime Nor Composite";
    else if(flag==true) cout<<"Prime";
    else cout<<"Composite";
}