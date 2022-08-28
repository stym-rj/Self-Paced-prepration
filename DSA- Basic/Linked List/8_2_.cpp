// GFG Approach

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
    Node* head=NULL;

    head=insertionAtBeginning(head, 89);
    head=insertionAtBeginning(head, 359);
    head=insertionAtBeginning(head, 39);

    head->printList();
    return 0;
}