#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter cost price : ";
    cin>>cp;
    int sp;
    cout<<"enter selling price : ";
    cin>>sp;
    // if(sp>cp){
    //     cout<<"profit";
    // }
    // if(sp<cp){ // cp>sp
    //     cout<<"loss";
    // }
    // if(sp==cp){
    //     cout<<"no profit no loss";
    // }

    // if(sp>cp){
    //     cout<<"profit";
    // }
    // else if(sp<cp){ // cp>sp
    //     cout<<"loss";
    // }
    // else{
    //     cout<<"no profit no loss";
    // }

    if(sp>cp){
        cout<<"profit is "<<sp-cp;
    }
    else if(sp<cp){ // cp>sp
        cout<<"loss is "<<cp-sp;
    }
    else{
        cout<<"no profit no loss";
    }
    
}