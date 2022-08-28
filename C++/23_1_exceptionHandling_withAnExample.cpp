#include<iostream>
using namespace std;

int main(){
    int x, y;
    cin>>x>>y;

    try{
        if( y==0 )  throw 0;
        cout<<" x divided by y : "<<x/y<<endl;
    }
    catch(int x){
        cout<<"Division is Zero"<<endl;
    }
}