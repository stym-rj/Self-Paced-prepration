#include<iostream>
using namespace std;
int main(){
    int arr[]={4,6,2,7,3,5,3,9,2,13,54,1,5,23,7,4,8,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    int result=arr[0];
    for(int i=0; i<n; i++) result=max(result, arr[i]);

    cout<<result;
}