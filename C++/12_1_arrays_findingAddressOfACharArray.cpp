#include<iostream>
using namespace std;

int main(){
    char a[]="helloWorkd";
    cout<<a<<endl;          // actually prints the value of the a char array.
    cout<<&a<<endl;
    cout<<(int*)&a[0]<<endl;        //this is how we find the address of a character array with its index.
    cout<<(int*)&a[1]<<endl;
    cout<<(int*)&a[2]<<endl;
    cout<<&a+1<<endl;

    int b[]={3,5,2,3};
    cout<<b<<endl;

    for(int m: b) cout<<m<<endl;
}