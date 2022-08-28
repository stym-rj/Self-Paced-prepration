#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[]={4,6,91,92,3,5,90,9,2,13,54,1,5,23,7,4,8,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    int result= *max_element(arr, arr+n);           // this is a method from '<algorithm>' header file which finds the greatest element from (arr) to (arr+n). here, From 0 to 0+n.         If we want greatest element from 3 to 7, we can do as *max_element(arr+n, arr+7).
    cout<<result<<endl;
    int res1=*max_element(arr+2, arr+7);            //greatest element from element number 3 to element number 7.       this function takes 1 extra element for the 2nd argument. suppose if we have b[5], then , to find the greatest element, we need to send (0, (length of b +1 that is equal to 5)) -> (0,5)-> *max_element(b, b+5)
    cout<<res1<<endl;

    vector<int> v{3,6,2,6,4,52,36,43,3,6,2};
    int res2= *max_element(v.begin(), v.end());         // i dont know why its throwing an error on '*max_element()' function.
    cout<<res2<<endl;

}