#include<iostream>
using namespace std;

int arrAvg(int *a, const int &n) throw (string, int){            // this 'throw (string)' is optional to write, but its a good practice to write all the exceptions that this function mighnt throw like : 'throw (string, int, double)' etc.        it makes the redability of your  code easier.
    if(n==0)        throw string("array size can't be zero");       // if this is triggered, then the function exit by throwing the exception, it wont reach the return (sum/n) statement.
    else if(n==1){
        int p=*a;
        throw p;
    }

    int sum =0;
    for(int i=0; i<n; i++)      sum+=*(a+i);
    return (sum/n);
}

int main(){
    int arr[]={3,6,2,43,21};
    int n=0;
    try{
        int res= arrAvg(arr, n);
        cout<<res<<endl;
    }
    catch( string e1){
        cout<<e1<<endl;
    }
    catch(int e2){
        cout<<e2<<endl;
    }
}