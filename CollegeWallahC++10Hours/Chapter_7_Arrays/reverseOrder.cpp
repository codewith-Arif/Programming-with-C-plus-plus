#include<iostream>
using namespace std;
int main(){
    int a[] = {5,8,6,2,15,96};
    int n= sizeof(a)/4;
    int b[n];
    // for(int i=1;i<n;i++){
    //    int j= n-1-i;
    //    b[i] = a[j];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<b[i]<<" ";
    // }

    for(int i=0;i<n;i++){
        b[i] = a[n-1-i];
        cout<<b[i]<<" ";
    }
}