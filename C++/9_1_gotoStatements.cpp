#include<iostream>
using namespace std;

int main(){
    label1:
    {
        cout<<"even"<<endl;
    }
    label2:
        cout<<"odd"<<endl;

    
    int x;
    cout<<"enter the value of x : ";
    cin>>x;
    if(x%2==0) goto label1;
    else goto label2;


}