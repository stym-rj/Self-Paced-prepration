#include<iostream>
using namespace std;
int main(){
    int x=4,y=6,z=9, a;

    a=(x,y,z);      //(first evaluation-> (x,y))        (second evaluation-> (y, z)),       so, finally, 'a' will be evaluated to z
    cout<<a<<endl;


    int b;
    b = x,y,z ;           // '=' operator has higher presedence than ',' so, b=x.           (',' operator has the least presedence.)
    cout<<b<<endl;
}