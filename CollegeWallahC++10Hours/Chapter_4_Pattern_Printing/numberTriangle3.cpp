// HW: Print the given pattern.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=n;j>=n-i+1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}