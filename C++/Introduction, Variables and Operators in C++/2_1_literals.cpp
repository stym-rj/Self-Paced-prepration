#include<iostream>
using namespace std;

int main(){
    int a=30;       // no prefix is applied, hence, it is a decimal value
    int b= 0x1A;    // prefix= 0x, hence, it is a hexadecimal value
    int c= 016;     // prefix= 0, hence, it is an octal value
    int d=0b11;     // prefix = 0b, hence, it is a binary value.
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
}