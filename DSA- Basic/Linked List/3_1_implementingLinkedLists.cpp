#include<iostream> 
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int a){
        data=a;
        next=NULL;
    }

};

int main(){
    Node* head= new Node(10);
    cout<<head<<endl;
    Node* temp1= new Node(20);
    cout<<temp1<<endl;
    Node* temp2=new Node(30);
    cout<<temp2<<endl;

    head->next=temp1;
    temp1->next=temp2;
}