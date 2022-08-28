// time complexity= O(n)
// space complexity= O(1)

#include<iostream>
using namespace std;

int removeDup(int arr[], int size){
    int res=1;
    for(int i=0; i<size-1; i++){
        if(arr[res-1]!=arr[i]){
            arr[res]=arr[i];
            res++;
        }
    }

    return res;
}

int main(){
    int arr[]={3,3,3,5,6,6,6,6,6,6,6,8,8,8,9,9,9,9};
    int size=sizeof(arr)/4;
    cout<<"size of array before removing duplicates : "<<size<<endl;

    int newSize=removeDup(arr, size);
    cout<<"size of array after removing duplicates : "<<newSize<<endl;

    for(int i=0; i<newSize; i++){
        cout<<arr[i]<<" ";
    }
}