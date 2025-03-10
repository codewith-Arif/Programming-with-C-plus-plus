#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter marks : ";
    cin>>n;
    // if(n>=81 and n<=100){
    //     cout<<"Very Good";
    // }
    // if(n>=61 and n<=80){
    //     cout<<"Good";
    // }
    // if(n>=41 and n<=60){
    //     cout<<"Average";
    // }
    // if(n<=40){
    //     cout<<"Fail";
    // }

    // if(n>=81 and n<=100){
    //     cout<<"Very Good";
    // }
    // else if(n>=61 and n<=80){
    //     cout<<"Good";
    // }
    // else if(n>=41 and n<=60){
    //     cout<<"Average";
    // }
    // else{
    //     cout<<"Fail";
    // }

    if(n>=81 and n<=100){
        cout<<"Very Good";
    }
    else if(n>=61){
        cout<<"Good";
    }
    else if(n>=41){
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }
}