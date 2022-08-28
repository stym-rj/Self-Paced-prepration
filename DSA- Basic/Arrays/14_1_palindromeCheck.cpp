#include<iostream>
using namespace std;

bool palindromeCheck(string n , int start, int end){     // abcba

    if(start>=end)  return true;

    return (n[start]==n[end]&& palindromeCheck(n, start+1, end-1));
}

int main(){
    string a="gfg898gfg ";
    cout<<boolalpha;
    cout<<palindromeCheck(a, 0, a.length()-1);
}