#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    for (int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[]={4,5,6,7,8,8,9};
    int size=sizeof(arr)/4;
    cout<<boolalpha;
    cout<<isSorted(arr, size);
}