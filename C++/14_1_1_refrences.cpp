#include<iostream>
using namespace std;
int main(){
    // when a reference variable is created, changing any of the two variable;s value will reflect to both the variable's value

    int x=4;
    int &y=x;

    cout<<y<<endl;
    y=89;
    cout<<y<<endl;
    cout<<x<<endl;

    y=x+y;
    cout<<x<<endl;
    cout<<y<<endl;
}