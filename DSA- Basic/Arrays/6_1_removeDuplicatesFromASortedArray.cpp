#include<iostream>
using namespace std;

int removeDup(int arr[], int size){
    int tempsize=size;
    for(int i=0; i<tempsize-1; i++){
        if(arr[i]==arr[i+1]){
            i=i-1;
            tempsize=tempsize -1;
            for(int j=i+1; j<tempsize; j++){
                arr[j+1]=arr[j+2];
            }
        }
    }

    return tempsize;
}

int main(){
    int arr[]={4,4,4,5,6,7,7,7,8,9,9,9,9};
    int size=sizeof(arr)/4;
    cout<<"size of the array before removing duplicates is : "<<size<<endl;

    int newSize=removeDup(arr, size);
    cout<<"new size of the array after removing duplicates is : "<<newSize<<endl;
    for(int i=0; i<newSize; i++){
        cout<<arr[i]<<" ";
    }
}