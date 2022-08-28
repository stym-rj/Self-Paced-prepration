// time complexity= O(n)
// space complexity= O(1)


#include<iostream>
using namespace std;

void leftRotate(int arr[], int size){
    int temp=arr[0];
    for(int i=1; i<size; i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
}

int main(){
    int arr[]={3,4,1,6,7};
    int size=sizeof(arr)/4;

    leftRotate(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}