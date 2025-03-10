#include<iostream>
using namespace std;
int main(){
    int arr[4][2] = {{4,6},{5,8},{8,9},{4,10}};
    int mx = INT16_MIN;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]>mx){
                mx = arr[i][j];
            }
        }
    }
    cout<<mx;
}