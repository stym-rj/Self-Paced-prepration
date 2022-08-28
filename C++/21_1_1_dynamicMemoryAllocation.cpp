// there are 4 sections of a memory
// 1. Stack     -> stores normal variables.
// 2. Heap      -> stores dynamically allocated variables.
// 3. Data      -> stores static and global types of variables.
// 4. Text      -> stores texts like if else contions and other statements.

//  ╔=============╗
//  ║    Stack    ║
//  ╠=============╣
//  ║    Heap     ║
//  ╠=============╣
//  ║    Data     ║
//  ╠=============╣
//  ║    Text     ║
//  ╚=============╝

#include<iostream>
using namespace std;

int main(){
    static int a;           // stored in data section of memory

    int b,c;            // stored in stack section of memory

    int *p=new int;                 // creates a dynamically allocated int.
    *p=34;
    cout<<*p<<endl;

    int *ptr=new int[5];            // stored in heap section of memory
    *(ptr +2)=10;       // sets value of arr[2] =10. (or sets value of third element in arr as 10.)
    cout<<*(ptr+2)<<endl;
    delete [] ptr;      // deletes the allocated array.
    ptr=NULL;           // we do this so that in case by change if we use ptr again, then we will get NULL, not a garbage value (or even our program may crash if we dont allocate it as NULL.)

    int *r=new int(4);
    cout<<*r<<" is the value of *r "<<endl;         // sets the value of *r as 4.
    

    // WE SHOULD ALWAYS FREE THE MEMORY WHICH IS NOT OF OUR USE NOW. IF WE DONT DO SO, THEN OUR IT WILL CAUSE MEMORY LEAK PROBLEM.
}