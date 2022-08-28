#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"enter your name with surname: ";
    getline(cin, s);        //does not stops reading input until we press 'enter key'.
    cout<<s<<endl;


    string q;
    cout<<"when the getline() function sees the last passed argument , that is 'y', then the getline() function will stop reading the input."<<endl;
    getline(cin, q, 'y');           // stops reading input when we press 'y'. we can still input things after pressing 'y' but getline() wont anything after 'y'.
    cout<<q<<endl;          // hence, any letter from 'y' wont be stored in q.
}