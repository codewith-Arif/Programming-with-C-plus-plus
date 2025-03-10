//  If the ages of Ram, Shyam and Ajay are input 
// through the keyboard, write a program to 
// determine the youngest of the three.
#include<iostream>
using namespace std;
int main(){
    int ageRam,ageShyam,ageAjay;
    cout<<"Enter the age of Ram : ";
    cin>>ageRam;
    cout<<"Enter the age of Shyam : ";
    cin>>ageShyam;
    cout<<"Enter the age of Ajay : ";
    cin>>ageAjay;
    if(ageRam>ageShyam && ageRam>ageAjay){
        cout<<"Ram is the youngest";
    }
    else if(ageShyam>ageAjay && ageShyam>ageRam){
        cout<<"Shyam is the youngest";
    }
    else{
        cout<<"Ajay is the youngest";
    }
    
}
