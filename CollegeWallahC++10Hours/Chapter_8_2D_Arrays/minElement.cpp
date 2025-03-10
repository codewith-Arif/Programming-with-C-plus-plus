#include<iostream>
using namespace std;
int main(){
    int arr[4][2] = {{4,12},{5,6},{7,8},{9,3}};
    int mn = INT16_MAX;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]<mn){
                mn = arr[i][j];
            }
        }
    }
    cout<<mn;
}