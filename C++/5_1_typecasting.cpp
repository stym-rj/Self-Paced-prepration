#include<iostream>
using namespace std;

int main(){
    int x=5, y=3;
    double z=(double)x/y;       //old style typecasting(used in C language). it will blindly typecast without checking if it can be typecasted or not.
    cout<<z<<endl;

    double p= static_cast<double>(x)/static_cast<double>(y);       // better new way to type cast. it will only typecast if the variable is typecastable.
    cout<<p<<endl;

    double q= static_cast<double>(x/y);       // better new way to type cast. it will only typecast if the variable is typecastable.
    cout<<q<<endl;
}