#include<iostream>
using namespace std;
int main(){
    int arr1[2][2] = {{1,2},{5,4}};

    cout<<"Ist matrix : "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    int arr2[2][2] = {{45,1},{4,65}};
    cout<<"2nd matrix : "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    // int sum = arr1[i][j]+arr2[i][j];
    cout<<"Sum of Two matrices is :"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            int sum = arr1[i][j]+arr2[i][j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}