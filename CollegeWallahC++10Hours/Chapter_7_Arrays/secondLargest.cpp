#include<iostream>
using namespace std;
int main(){
int arr[] = {-4,-5,-8,-9,-2};
    int n = sizeof(arr)/4;
    int mx = INT16_MIN;
    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
    }
    int smx = INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=mx){
            smx = max(smx,arr[i]);
        }
    }
    cout<<smx;
}