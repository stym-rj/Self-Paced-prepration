#include<iostream>
using namespace std;

typedef struct Point {
    int x; 
    int y;
    string q;
}P;             // when we typedef a structure, we can assing a long structure name to a smaller structure name.(in this case, original name= Point and short name =P)

int main(){
    P p;        // we can also write it as ' struct Point p;'
    p.x=5;
    p.y=8;

    cout<<p.x<<" "<<p.y<<endl;
}