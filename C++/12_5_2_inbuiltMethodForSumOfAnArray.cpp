#include<iostream>
#include<numeric>       // this header file is included to use the sum of an array method.
#include<vector>
using namespace std;

int main(){
    cout<<"for array-------------------"<<endl;


    int a[]={3,5,2,6,4,6,43,2};
    int arraySum=0;      // this initialisation is must b/c we need to pass this sum=0 in the accumulate() function to find the sum.
    arraySum=accumulate(a, a+(sizeof(a)/sizeof(a[0])), arraySum);     //first we send the array's first element and then we send the last element +1 and then we send the variable in which we have to add the sum.
    cout<<arraySum<<endl;


    cout<<"for vector-------------------"<<endl;

    vector<int> b{3,5,7,1};
    int vectorSum=0;
    vectorSum=accumulate(b.begin(), b.end(), vectorSum);
    cout<<vectorSum<<endl;
}