#include<iostream>
using namespace std;
int main(){
    bool a= true;
    cout<<a<<endl;              // 1
    cout<<boolalpha;
    cout<<a<<endl;              // true
    cout<<noboolalpha;
    cout<<a<<endl;              // 1
}