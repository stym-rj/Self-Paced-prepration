#include<iostream>
using namespace std;

void insert(bool arr[], int index){
    arr[index]=1;
}

void del(bool arr[], int index){
    arr[index]=0;
}

bool search(bool arr[], int index){
    return arr[index];
}

int main(){
    bool arr[1000]={0};
    insert(arr, 5);
    insert(arr, 4);
    insert(arr, 0);
    cout<<search(arr,4)<<endl;          // true
    del(arr,4);
    cout<<search(arr, 4)<<endl;         // false, since 4 is deleted.
    cout<<search(arr,0)<<endl;          // true
    cout<<search(arr,2)<<endl;          // false
}