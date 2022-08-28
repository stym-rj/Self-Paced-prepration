#include<iostream>
using namespace std;

int &fun(){         //this will return a reference. its same as 'int &fun' for a variable.  

    // WE SHOULD NEVER RETURN A THE REFERENCE OF A NON STATIC VARIABLE. since non static variables gets destroyed as soon as the function call is over, so if we return reference of a non static variable, then the program will not be a valid program.
    static int x=10;
    return x;
}

int main(){
    int &z=fun();
    cout<<fun()<<" ";
    z=30;
    cout<<fun()<<endl;
}