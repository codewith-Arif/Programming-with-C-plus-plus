// Homework : Calculate the product of all the elements 
// in the given array.
#include<iostream>
using namespace std;
int main(){
    int arr [] = {1,5,6,2};
    int n = sizeof(arr)/4;

    int prod = 1;
    for(int i=0;i<n;i++){
        prod *= arr[i];
    }
    cout<<prod;
}