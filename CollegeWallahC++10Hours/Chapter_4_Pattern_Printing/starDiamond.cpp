#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    int nsp = n/2;
    int nst = 1;
    for(int i=1;i<=n;i++){
        cout<<" ";
    }
    for(int k=1;k<=nst;k++){
        cout<<"*";
    }
    if(i<ml){
        nsp--;
        nst += 2;
    }
    else{
        nsp++;
        nst -= 2;
    }
    cout<<endl;
}