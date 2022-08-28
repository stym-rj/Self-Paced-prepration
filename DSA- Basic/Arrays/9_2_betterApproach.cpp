#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void moveZeroes(int arr[], int size){
    int count=0;
    for(int i=0; i<size; i++){
        if(arr[i]){
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main(){
    int arr[]={3,4,5,0,7,0,5,2,1,9};
    int size= sizeof(arr)/4;

    moveZeroes(arr, size);

    for(int i=0; i<size; i++)       cout<<arr[i]<<" ";
}