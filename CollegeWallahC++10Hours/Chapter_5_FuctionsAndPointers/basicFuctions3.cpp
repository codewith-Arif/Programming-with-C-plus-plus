#include<iostream>
using namespace std;
void usa(){
    cout<<"You are in USA"<<endl;
    cout<<"You are in USA"<<endl;
    return; // khatam ho jata hai
}
void india(){
    cout<<"You are in India"<<endl;
    return;
}
int main(){
    usa();
    cout<<"You are in main"<<endl;
    india();
}