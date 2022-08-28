#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=6;
    vector<int> a(n, 34);       //here, a vector of size 'n' will be created in which all the n elements will have the value 34.

    for(auto i: a) cout<<i<<endl;

}