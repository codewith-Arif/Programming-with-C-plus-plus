#include<iostream>
using namespace std;
int main(){
    int arr[4][2]= {{12,4},{4,6},{7,6},{9,15}};
    int mx = INT16_MIN;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            mx = max(mx, arr[i][j]);
        }
    }
    cout<<mx;
}