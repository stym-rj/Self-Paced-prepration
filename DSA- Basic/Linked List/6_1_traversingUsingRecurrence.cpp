#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int _data){
        data=_data;
        next=NULL;
    }

    void traverse(Node* head){
        Node* curr=head;
        if(curr==NULL)  return;
        cout<<curr->data<<endl;
        curr=curr->next;
        traverse(curr); 
    }
};

int main(){
    Node* head=new Node(10);
    Node* temp1=new Node(20);
    Node* temp2=new Node(30);
    Node* temp3=new Node(40);

    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    head->traverse(head);
}