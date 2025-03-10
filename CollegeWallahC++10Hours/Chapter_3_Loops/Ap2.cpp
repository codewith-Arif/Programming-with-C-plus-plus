#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    //4 7 10 13 ....
    // for(int i=4;i<=3*n+1;i+=3){
    //     cout<<i<<" ";
    // }

    int a = 4;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a = a + 3;
    }
}