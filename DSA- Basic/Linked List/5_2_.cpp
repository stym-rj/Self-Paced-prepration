#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        data= d;
        next=NULL;
    }

    void traverse(){
        Node *curr=this;
        while(curr!=NULL){
            cout<<curr->data<<endl;
            curr=curr->next;
        }
    }
};

void printlist(Node* curr){
    while(curr!=NULL){
            cout<<curr->data<<endl;
            curr=curr->next;
        }
}


int main(){
    Node* head= new Node(10);
    Node* temp1= new Node(20);
    Node* temp2= new Node(30);

    head->next=temp1;
    temp1->next=temp2;
    
    // head->traverse();
    // temp1->traverse();

    printlist(head);
    printlist(head);

    // traverseLinkedList(head);

}