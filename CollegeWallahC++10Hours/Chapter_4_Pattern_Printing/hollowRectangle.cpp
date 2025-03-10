// HW : Print the given pattern.
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the number of columns : ";
    cin>>n;
    
    for(int i=1;i<=m;i++){ // Outer loop for rows 
        for(int j=1;j<=n;j++){ // Inner loop for columns
            if(i==1 || i==m || j==1 || j==n){ // Print '*' on the borders
                cout<<"*";
            }
            else{
                cout<<" "; // print space for the hollow part
            }
         }
         cout<<endl; // Move to the next row
    }
    return 0;
}