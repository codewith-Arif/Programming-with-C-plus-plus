// HW : Print the factorials of first ‘n’ numbers.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
        cout<<i<<"! = "<<fact<<endl;
    }
}
