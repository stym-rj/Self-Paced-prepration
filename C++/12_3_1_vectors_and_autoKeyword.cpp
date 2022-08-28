#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> v;
    cout<<"size of the vector: "<<v.size()<<endl;       //v.size() is used to get the total number of elements in the vector.
    v.push_back(34);
    v.push_back(42);
    v.push_back(78);
    v.push_back(8765);
    cout<<"size of the vector: "<<v.size()<<endl;

    cout<<"printing the elements of the v vector : "<<endl;
    for(auto x: v){     //better way to traverse through a vector than using classical for(int i=0; i<v.size(); i++){}. This can also be done in arrays.
        cout<<x<<endl;
    }
    cout<<"-------end of printing------- "<<endl;

    for(int o: v) cout<<o<<endl;        // in place of 'auto' keyword, 'int' data type can also be there.


    auto y='c';     //auto is a keyword which is used to store any type of data type.
    cout<<y<<endl;

    y=3;        // once 'auto' gets a value, it detects its data type, and then, we cant change that datatype and cant store any other data type values in it. So, '3' will be typecasted to char data type.
    cout<<y<<endl;

    auto p=3;
    cout<<p<<endl;

    p='q';      //this will typecast 'q' to integer and hence will give the ASCII value of 'q'.
    cout<<p<<endl;

    // p="satyam";     //this will throw an error as a string cant be typecasted to an integer.

    p=4.5;      // we will get p=4 as p is already integer type, so '4.5' will be typecasted to int type.
    cout<<p<<endl;
}