#include<iostream>
using namespace std;
int main(){
    int arr[4][2] = {{4,2},{5,6},{8,6},{5,9}};
    int sum = 0;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            sum += arr[i][j];
        }
    }
    cout<<sum;  
}