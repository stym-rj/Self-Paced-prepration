#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void reverse(int arr[], int size){
    for(int i=0; i<(size)/2; i++){
        swap(arr[i], arr[size-1-i]);
    }
}

int main(){
    int arr[]={3,5,2,6,7,90,9};
    int size=sizeof(arr)/4;
    reverse(arr, size);
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}