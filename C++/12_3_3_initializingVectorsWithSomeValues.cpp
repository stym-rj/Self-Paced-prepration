#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v{3,5,2,6,3,6,3};
    for(auto i: v) cout<<i<<endl;

    // vector <int> b(3,5,2,5,3);          // wrong way to initialize a vector. (Throws errors as inside the small brackets, values are considered as arguments of a function in the 'vector' class.)
    
}