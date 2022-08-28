#include<iostream>
using namespace std;
int main(){
    auto a=4.5;
    auto b=3;

    cout<<typeid(a).name()<<endl;       // output: d            // that means double
    cout<<typeid(b).name()<<endl;       // output: i            // that means integer
}