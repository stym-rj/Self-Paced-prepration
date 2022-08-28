#include<iostream>
using namespace std;

int secLargest(int arr[], int size){
    int count=0;
    int largest, temp=arr[0];
    for (int i=0; i<size-1; i++){
        if(temp<arr[i+1]){
            temp=arr[i+1];
            largest=i+1;
            count++;
        }
    }
    
    if(!count){
        if(arr[0]>arr[1])
            largest=0;
        else
            return -1;
    }

    int secLargest;
    temp=0;
    count=0;
    for(int i=0; i<size; i++){
        if(i==largest)
            continue;
        if(temp<arr[i]){
            temp=arr[i];
            secLargest=i;
            count++;
        }
    }
    return secLargest;

}

int main(){
    int arr[]={1,1,9,7,1};
    int size=sizeof(arr)/4;
    int sec=secLargest(arr, size);
    cout<<"the second largest element is at index number : "<<sec;
}