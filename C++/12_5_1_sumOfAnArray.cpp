#include<iostream>
using namespace std;

int main(){
    int a[]={3,43,453,67,52,4,7,52,3,1};
    int result=0;
    for(int i: a) result+=i;
    cout<<result<<endl;
}