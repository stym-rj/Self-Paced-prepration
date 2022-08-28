#include<iostream>
using namespace std;

struct Point {
    int x ;
    int y;
};

int main(){
    Point p= { 10, 30};
    Point *ptr=&p;
    cout<<ptr->x<<endl;     //arrow operator(->)        access the 'x' object of the 'Point' structure which is pointed by the 'ptr' pointer
    cout<<ptr->y<<endl;     //arrow operator(->)

    ptr->x=90;
    cout<<p.x<<endl;
}