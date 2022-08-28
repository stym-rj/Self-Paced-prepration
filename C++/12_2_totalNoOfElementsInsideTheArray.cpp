#include<iostream>
using namespace std;

int main(){
    int arr[]={3,6,2,5,4,1};

    int b= sizeof(arr)/sizeof(arr[0]);      //  1st Method to find the length of an array.
    cout<<b<<endl;

    int c=end(arr)- begin(arr);     //  2nd Method to find the length of an array.
    cout<<c<<endl;
}