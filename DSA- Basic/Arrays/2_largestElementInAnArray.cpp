#include<iostream>
using namespace std;

int largest(int arr[], int size){
    int largest=arr[0];
    for(int i=0; i<size-1; i++){
        if(largest<arr[i+1])
            largest=arr[i+1];
    }
    return largest;
}

int main(){
    int arr[]={-49,-6,-3,-5,-7,-32};
    cout<<largest(arr, 6);
}