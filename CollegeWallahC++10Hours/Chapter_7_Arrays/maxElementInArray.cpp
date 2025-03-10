#include<iostream>
using namespace std;
int main(){
    // int arr [] = {5,8,6,2,9};
    // int n= sizeof(arr)/4;
    // int mx = arr[0];
    // for(int i=1;i<n;i++){
    //     if(arr[i]>mx){
    //         mx = arr[i];
    //     }
    // }
    // cout<<mx;

    // for(int i=1;i<n;i++){
    //     mx = max(mx,arr[i]);
    // }
    // cout<<mx;

    int arr[] = {-4,-5,-8,-9,-2};
    int n = sizeof(arr)/4;
    int mx = INT16_MIN;
    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
    }
    cout<<mx;
}