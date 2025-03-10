// HW : Print the given pattern.
#include<iostream>
using namespace std;
int main(){
    int n; // Size of the cross
    cout<<"Enter the size of the cross(odd number) : ";
    cin>>n;

    if(n%2==0){
        cout<<"Please enter an odd number";
    }
    else{
        for(int i=1;i<=n;i++){ // Outer loop for rows 
            for(int j=1;j<=n;j++){ // Inner loop for columns
                if(i==j || (i+j)==(n+1)){ 
                cout<<"*"; // print '*' for diagonal
                }
                else{
                cout<<" "; // print space for diagonal
                }
            }
            cout<<endl; // Move to the next row
        }
    }
    return 0;
}