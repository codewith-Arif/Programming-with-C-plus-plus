#include<iostream>
using namespace std;
int main(){
    
    int arr[4][2] = {{4,80},{5,81},{6,82},{7,84}};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<"";
        }
        cout<<endl;
    }
}