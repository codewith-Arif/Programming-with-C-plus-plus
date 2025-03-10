// HW :Print the given pattern.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    int nst = 1;
    for(int i=1;i<=n;i++){ // rows
        for(int k=1;k<=n-i;k++){ // spaces
            cout<<"  ";
        }
        for(int j=1;j<=nst;j++){ // stars
            cout<<"*"<<" ";
        }
        nst = nst + 2;
        cout<<endl;
    }
}