#include<iostream>
using namespace std;

int avg(const int *a, const int &n){        // in this function, if n==0, then, this function will throw an error b/c {something/0 = undefined}.
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=*(a+i);
    }
    sum=sum/n;
    return sum;
}

int main(){
    int arr[4]={3,56,2,6};
    int n=4;
    cout<<"average of the array is: "<<avg(arr, n)<<endl;
}