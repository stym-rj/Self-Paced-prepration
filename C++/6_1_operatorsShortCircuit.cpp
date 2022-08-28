#include<iostream>
using namespace std;

int main(){
    int x=5;
    bool y= (x==4) && (x++);            //in this expression, x==4 will be evaluated first (because of the precedence) and since (x==4) is false, the compiler will ignore the remaining expressions when it sees the && operator, hence (x++) won't be executed. This is called short circuiting.
    cout<<y<<endl<<x<<endl;         // x will remain same, it wont get (x++).


string s(10,'-');
cout<<s<<endl;


    int a=5;
    bool b=(a==4) || (a++);         // this will evaluate to true as after the (a==4) condition check, there is || (OR) sign so the (x++) will be check and evaluated.
    cout<<b<<endl<<a<<endl;


cout<<s<<endl;


    int p=5;
    bool q= p==4 && ++p && (p++);
    cout<<q<<endl<<p<<endl;
}