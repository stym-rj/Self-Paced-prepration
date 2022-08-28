// setw(n)= set width to 5 spaces.
// setfill(x)= fill all the empty spaces with 'x'
// IMPORTANT-> setw() and setfill() has to be specified each time before using a cout that is supposed to contian the setw() and setfill() property.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=12;
    cout<<a<<endl;
    cout<<setw(5);
    cout<<setfill('*');
    cout<<a<<endl;
    cout<<setw(5);
    cout<<"hi"<<endl;
    cout<<left;
    cout<<setw(5);
    cout<<a<<endl;
    int b=4543544;
    cout<<b<<endl;
    cout<<setw(5);
    cout<<setfill('*');
    cout<<b<<endl;
}