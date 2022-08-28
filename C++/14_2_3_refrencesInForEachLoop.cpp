#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{2,3,4,5,6,7,8,9};

    for(int a: v) a=a+3;        //here, values of vector v will not be changed since the values in 'a' variables are just the copy of the values in v vector, they are not passed by references.
    
    for(int b: v) cout<<b<<" ";         //values of vector v stays the same.
    cout<<endl;

    // there is also an issue with the space and time complexity if the vector is not passed by reference. (see the previous program).



    // TO MODIFY THE VECTOR USING FOR EACH LOOP AND FOR A BETTER COMPLEXITY, WE USE REFERENCES (and we use 'const' keyword if we dont want to modify the vector, but in this case, we want to modify the vector so we wont use 'const' here.).
    for(int &a: v)      a=a+3;

    for(int &a: v)   cout<<a<<" ";       // the values will be changed.
    cout<<endl;


    // 'const' can be used when printing larger string vector.

    vector<string> q{"satyam raj", "hello helll", "ide geeksforgeeks" , "acer predator helios 300 " , "hello world"};

    for(const string &a : q)    cout<<a<<"\t";       //here we use 'const' since our intentions are not to change the values of the vector. 
    cout<<endl;


}