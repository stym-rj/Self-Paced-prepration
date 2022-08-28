#include<iostream>
using namespace std;

struct Point1{
    char a;
    double b;
    char c;

};
struct Point2{
    char a2;
    char b2;
    double c2;

};

int main(){
    Point1 p1;
    Point2 p2;
    cout<<sizeof(p1)<<endl;     // size allignment is done w.r.t. the greatest data type. ( {[1]+ [8-1=7]} + {[8]} + {[1]+ [8-1=7]}) = 8 + 8 + 8 = 24  (since it has 3 blocks.)
    cout<<sizeof(p2)<<endl;     // ( {[1] + [1] + [8-1-1=6]} + {[8]}) = 8 + 8= 16 ( it has only 2 blocks)

    //THUS, IT IS BETTER TO WRITE THE SMALLER SIZED DATATYPES TOGETHER (IN INCREASING ORDER OR DECREASING ORDER TO HAVE BETTER SPACE COMPLEXITY).
}