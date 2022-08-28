// time complexity = O(d)+ O(n-d)+ O(d)
//                 = O(n)
// space complexity = O(d)

#include<iostream>
using namespace std;

void leftRotateBy(int arr[], int n, int d){
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i]=arr[i];
    }

    for(int i=0; i<n-d; i++){
        arr[i]=arr[i+d];
    }
    for(int i=0; i<d; i++){
        arr[n-d+i]=temp[i];
    }
}

int main(){
    int arr[]={4,5,6,2,6,4,36,6,4,1,9};
    int d=5;
    int size=sizeof(arr)/4;

    leftRotateBy(arr, size, d);

    for(int i=0 ; i<size; i++)      cout<<arr[i]<<" ";
}