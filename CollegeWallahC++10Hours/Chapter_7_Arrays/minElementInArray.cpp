// Homework : Find the minimum value out of all the 
// elements in the array.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,6,8,9,3};
    int n = sizeof(arr)/4;

    int mn = arr[0];
    for(int i=0;i<n;i++){

        if(arr[i]<mn){
            mn = arr[i];
        }
    }
    cout<<mn;
}