#include<iostream>
#include<vector>
using namespace std;

void print(const vector<int> &v){         //here, passing by reference is better choice because if we dont pass it by reference, then the function will create its of copy of vector with size 1000 and that would take a lot of space and time to run the program for an even larger size.

// and in this case, in this function, we are not modifying the values of the vector, we are just accessing them, so again, its a better choice to pass by reference. But just in case if we forget that, then to avoid that, we should add 'const' before 'vector<int> &v' to avoid modifying the vector by accident.

    // v[2]=324234;        // this will throw error since we have put the 'const' keyword in the parameter.
    for(int i: v)   cout<<i<<" ";
}

int main(){
    vector<int> p;
    for(int i=0; i<1000; i++){
        p.push_back(i);
    }

    print(p);
}