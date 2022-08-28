// a recursive function is called tail recursive when the parent funciton dosent have more to do after the child funciton finishes its work.

#include<iostream>
using namespace std;

void rec1(int n){       // tail recursive.
    if (n==0)   return ;
    cout<<n<<endl;
    rec1(n-1);
}
void rec2(int n){       // this fucntion is not a tail recursive.
    if (n==0)   return ;
    rec2(n-1);
    cout<<n<<endl;
}

int main(){
    cout<<"example of tail recursive : "<<endl;     
    rec1(10);       // prints from 10 to 1
    cout<<"example of non tail recursive : "<<endl;
    rec2(10);       // prints from 1 to 10.
}