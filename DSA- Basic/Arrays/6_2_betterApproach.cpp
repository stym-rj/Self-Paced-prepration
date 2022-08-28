// time complexity= O(n)
// space complexity= O(n)

#include<iostream>
using namespace std;

int removeDup(int arr[], int size){
    int tempArr[size];
    tempArr[0]=arr[0];
    int sizeofTemp=1;
    for(int i=1; i<size-1; i++){
        if(tempArr[sizeofTemp-1]!=arr[i]){
            tempArr[sizeofTemp]=arr[i];
            sizeofTemp++;
        }
    }

    for(int i=0; i<sizeofTemp;i++){
        arr[i]=tempArr[i];
    }
    return sizeofTemp;
}

int main(){
    int arr[]={4,4,4,6,7,7,7,8,9,9,9};
    int size= sizeof(arr)/4;
    cout<<"size of the array before removing duplicates : "<<size<<endl;
    
    int newSize=removeDup(arr, size);
    cout<<"size of the array after removing duplicates : "<<newSize<<endl;

    for(int i=0; i<newSize; i++)    cout<<arr[i]<<" ";
}