// HW : WAP to print sum of all the even digits of 
// a given number.
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;

    // Input the number
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=1;i<=n;i++){ 
        int ld = n%10; // Extract the last digits
        if(ld%2==0){ // Check if the digit is even
            sum = sum + ld; // Add to the sum
        }
        n = n/10; // Remove the last digit
    }
    // Output the result
    cout<<"Sum of all the evens digits is : "<<sum;
}