// Homework : Count the number of elements in given array 
// greater than a given number x.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,5,9,6};
    int n = sizeof(arr)/4;
    int x = 4;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<count;
}