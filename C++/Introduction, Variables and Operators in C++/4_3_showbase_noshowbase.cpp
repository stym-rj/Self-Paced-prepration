#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=91;
    cout<<a<<endl;      // 34
    cout<<showbase;
    cout<<a<<endl;      // 34
    cout<<oct;
    cout<<a<<endl;      // 042      -> prints the oct value with the oct prefix
    cout<<hex;
    cout<<a<<endl;      // 0x22     -> prints the hex value with the hex prefix
    cout<<showpos;
    cout<<a<<endl;
    cout<<uppercase;
    cout<<a<<endl;
}