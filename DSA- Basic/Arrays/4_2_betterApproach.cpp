#include<iostream>
using namespace std;

int getSecondLargest(int arr[], int size){
    int res=-1, largest=0;
    for(int i=1; i<size; i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res])
                res=i;
        }
    }
    return res;
}

int main(){
    int arr[]={8,5,2,4,7,2,9};

    cout<<getSecondLargest(arr, sizeof(arr)/4);
}