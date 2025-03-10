#include<iostream>
using namespace std;
int main(){
    // rectangle banana hai
    // rows -> m, cols -> 5
    int m;
    cout<<"Enter number of rows : ";
    cin>>m;
    int n;
    cout<<"Enter number of cols : ";
    cin>>n;
    // for(int i=1;i<=m;i++){
    //    for(int i=1;i<=n;i++){
    //         cout<<"* ";
    //    }
    //     cout<<endl;
    // }

    for(int i=1;i<=m;i++){ // rows = m
        for(int j=1;j<=n;j++){ // cols =n
            cout<<"* ";
        }
        cout<<endl;
    }
}