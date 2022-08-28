#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;

}

int subtract(int a, int b){
    return a-b;
}

int multiply(int a, int b){
    return a*b;
}

int compute(int a, int b, int(*fun)(int , int ))            // This is how we pass a function as parameter in a function
{
    return fun(a, b);

}



int main(){
    int x= compute(4,5, add);
    cout<<x<<endl;

    cout<<compute(5,4, subtract)<<endl;
    cout<<compute(5,4, multiply)<<endl;
}