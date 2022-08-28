#include<iostream>
using namespace std;

int main(){
    string s="satyam raj raj hello";

    cout<<"-------first method------"<<endl;
    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }
    cout<<endl;
    
    
    cout<<"--------second method-------"<<endl;
    for(char a: s) cout<<a;
    cout<<endl;


    cout<<"--------third method-------"<<endl;
    for(auto a: s) cout<<a;
    cout<<endl;
}