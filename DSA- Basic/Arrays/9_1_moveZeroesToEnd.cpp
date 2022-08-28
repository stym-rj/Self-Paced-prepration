// time complexity = O(n^2)
// space complexity = O(1)

#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void leftRotate(int arr[], int n, int d){
    for(int i=d+1; i<n; i++){
        if(arr[i]){
            swap(arr[i],arr[d]);
            return;
        }
    }
}

void moveZeroes(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            leftRotate(arr, n, i);
        }
    }
}

int main(){
    int arr[]={0,5,6,0,7,5,0,2,0};
    int size=sizeof(arr)/4;

    moveZeroes(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}