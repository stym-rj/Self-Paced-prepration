#include<iostream>
using namespace std;

struct Point {
    int x ;
    int y;
};

int main(){
    Point arr[4];
    for(int i=0; i<4; i++){
        arr[i].x=i;
        arr[i].y=i*10;
    }

    for (Point r: arr)  cout<<r.x<<" "<<r.y<<endl;
}