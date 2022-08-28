// My Approach

#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int _data){
            data=_data;
            next=NULL;
        }

        void printList(){
            Node* curr=this;
            while(curr!=NULL){
                cout<<curr->data<<endl;
                curr=curr->next;
            }
        }

};

Node* insertionAtBeginning(Node* head, int _data){
    Node* temp=new Node(_data);

    temp->data=_data;
    temp->next=head;

    return temp;
}

int main(){
    Node* head=new Node(45);
    Node* temp1=new Node(65);
    Node* temp2=new Node(23);
    Node* temp3= new Node(12);

    head->next=temp1;
    temp1->next= temp2;
    temp2->next=temp3;

    Node* newHead=insertionAtBeginning(head,67);

    newHead->printList();
    return 0;
}