#include<iostream>
using namespace std;

void swap1(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}
void swap2(int &a, int &b){     // since we have passed the variables as reference variables, therefore changes will be reflected in both the variables.
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=5,y=8;

    cout<<x<<" "<<y<<endl;
    swap1(x, y);
    cout<<x<<" "<<y<<endl;


    int p=3,q=9;
    cout<<p<<" "<<q<<endl;
    swap2(p,q);
    cout<<p<<" "<<q<<endl;
}