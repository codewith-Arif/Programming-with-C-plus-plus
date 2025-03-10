#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter n : ";
   cin>>n;
//    if(n>=0){
//         cout<<n;
//    }
//    else{ // n<0
//         cout<<-n;
//    }

    //if you want you change n into its absolut value.
    if(n<0) n = -n;
    cout<<n;
}