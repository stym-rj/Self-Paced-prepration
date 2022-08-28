#include<iostream>
using namespace std;

struct Point {
    int x; 
    int y;
    string q;
};

int main(){
    Point p;        // we can also write it as ' struct Point p;'
    p.x=5;
    p.y=8;

    cout<<p.x<<" "<<p.y<<endl;



    //ANOTHER WAY TO DECLARE MEMBERS OF A STRUCTURE.
    Point e{4,2,"satyam"};      // we must always pass the values in the order as it is declared in the structure.
    cout<<e.x<<endl;
    cout<<e.y<<endl;
    cout<<e.q<<endl;



    //ANOTHER WAY TO DECLARE MEMBERS OF A STRUCTURE.
    Point c={.x=9, .y=5, .q="raj hello"};          // here, we can pass value without their order, but we must pass it by assigning the values to its proper variables.
    cout<<c.x<<endl;
    cout<<c.y<<endl;
    cout<<c.q<<endl;
    //might not work in c++. mainly used in c language.


    //WE CAN ALSO SKIP A VALUE WHILE INITIALIZING LIKE THIS, AND THE SKIPPED VALUES WILL GET A DEFAULT VALUES OF 0.
    Point r={.y=3}; 
    cout<<r.x<<endl;
    cout<<r.y<<endl;
    cout<<r.q<<endl;


}