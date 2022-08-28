#include<iostream>
using namespace std;

void rec(int n, int k){
    if(n==0)        return;
    cout<<k<<endl;
    rec(n-1, k+1);
}

int main(){
    rec(10,1);
}