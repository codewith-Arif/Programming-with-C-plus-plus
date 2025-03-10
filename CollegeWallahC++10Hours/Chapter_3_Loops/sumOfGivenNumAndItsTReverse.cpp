// HW : WAP to print the sum of given number 
// and its reverse.
#include<iostream>
using namespace std;
int main(){
    int n,rev = 0;
    
    // Input the number
    cout<<"Enter a number : ";
    cin>>n;
    int temp = n; // Store the original number

    while(n>0){
        int ld = n%10;  // Extract the last digit
        rev = (rev*10)+ld; // Build the reverse
        n = n/10; // Remove the last digit
    }
    int sum = temp + rev;
    cout<<"The sum of given number and its reverse : "<<sum;
}