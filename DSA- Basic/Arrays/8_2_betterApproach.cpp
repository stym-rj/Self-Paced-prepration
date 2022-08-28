// time complexity= O(n)
// space complexity = O(1)

#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void reverse(int arr[], int low, int high){
    while(low<high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void leftRotate(int arr[], int n, int d){
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}


int main(){
    int arr[]={4,5,6,7,8,9,1};

    int size= sizeof(arr)/4;

    leftRotate(arr, size, 3);


    for(int i= 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}