#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {4, 1, 3, 7, 3}; // declaration and initialization
    int arr[] = {4,1,3,7,3};
    // arr[0] = 0; // updation
    // output
    // for (int i = 0; i <= 4; i++){
    //     cout<<arr[i]<<" ";
    // }

    //print reverse of the array
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}