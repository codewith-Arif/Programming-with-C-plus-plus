#include<iostream>
using namespace std;
int main(){
    // 5 integers -> 6,2,8,5,0
    int arr[5]; // declaration
    arr[0] = 6; // set
    arr[1] = 2;
    arr[2] = 8;
    arr[3] = 5;
    arr[4] = 0;
    // cout<<arr[0]<<" ";
    // cout<<arr[1]<<" ";
    // cout<<arr[2]<<" ";
    // cout<<arr[3]<<" ";
    // cout<<arr[4]<<" ";

    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }

}