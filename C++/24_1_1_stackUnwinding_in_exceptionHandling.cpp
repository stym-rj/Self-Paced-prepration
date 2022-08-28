#include<iostream>
using namespace std;
void f1(), f2(), f3();
void f3(){
    cout<<"f3 begins"<<endl;
    try{
        f2();
    }
    catch(int i){       // STEP 3: the program reaches to this function ans sees that there is a suitable catch block, so this catch block is executed and after this, next statements will be executed.
        cout<<"exception caught"<<endl;
    }
    //
    cout<<"f3 closes"<<endl;

}
void f2(){
    cout<<"f2 begins"<<endl;
    f1();       
    // STEP 2: the program reaches f2(), here, no catch block is found, so this function also goes out of the stack and the below statement will not be executed b/c the function goes out of the stack. and the program goes to the next previous function.
    cout<<"f2 closes"<<endl;
}

void f1(){
    cout<<"f1 begins"<<endl;
    throw 100;                          // STEP 1: exception thrown.        no catch block in this function, so this function is unwinded from stack and the program goes to the previous function.     And the statements after this will not be executed since the function goes out of the stack(or the function is unwinded).
    cout<<"f1 closes"<<endl;
}

int main(){
    f3();
    cout<<"bye"<<endl;
}