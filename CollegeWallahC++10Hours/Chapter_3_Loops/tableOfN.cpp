// HW : Print the table of ‘n’. Here ‘n’ is a integer 
// which user will input.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer : ";
    cin>>n;

    for(int i=1;i<=10;i++){
        cout<<n<<"*"<<i<<" = "<<n*i<<endl;
    }
}