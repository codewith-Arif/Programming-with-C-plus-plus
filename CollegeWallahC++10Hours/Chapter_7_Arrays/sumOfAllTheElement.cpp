#include <iostream>
using namespace std;
int main(){
    // int arr[] = {7,6,5,94,6,9};
    // int sum = 0;
    // for(int i=0;i<=5;i++){
    //     sum += arr[i];
    // }
    // cout<<sum;

    int arr[] = {12,8,7,6,8,45,7};
    int n = sizeof(arr)/4;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<sum;
}