#include<iostream>
using namespace std;

int main(){
    double x, y;
    cin>> x >> y ;

    try{
        if(x==0.0)      throw 0;
        if(y==0.0)      throw string("y is zero");
        if(x+y<0.0)     throw (x+y);
    }
    catch(int e1)       { cout<<e1<<endl; }                             // catches int type of thrownexception.
    catch(string e2)    { cout<<e2<<endl; }                             // catches string type of thrown exception.
    catch(...)          { cout<<"x + y is less than 0"<<endl; }         // catches any type of thrown exception if its type is not defined seperately in catch block.

    cout<<"bye bye"<<endl;
}