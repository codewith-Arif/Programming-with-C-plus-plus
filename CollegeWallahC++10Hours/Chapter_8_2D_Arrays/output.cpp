#include<iostream>
using namespace std;
int main(){
    int arr [2][3];
    arr[0][0] = 1;
    arr[0][1] = 5;
    arr[0][2] = 3;
    arr[1][0] = 2;
    arr[1][1] = 6;
    arr[1][2] = 6;
    for(int i = 0;i<2;i++){ //rows
        for(int j=0;j<3;j++){ //columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}