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
        
        Node* insertAtEnd(Node* head, int _data){
            Node* temp=new Node(_data);

            Node* curr=head;
            if(curr==NULL)  return temp;        // when the linked list is NULL (means contains no data).
            while(curr->next!=NULL){
                curr=curr->next;
            }
            curr->next=temp;

            return head;
        }

        void printList(){       // print the list
            Node* curr=this;
            
            while(curr!=NULL){
                cout<<curr->data<<endl;
                curr=curr->next;
            }
        }

};

int main(){
    Node* head=new Node(93);
    

    head=head->insertAtEnd(head, 98);
    head=head->insertAtEnd(head, 78);
    head=head->insertAtEnd(head, 28);
    head=head->insertAtEnd(head, 45);
    head=head->insertAtEnd(head, 21);
    head->printList();
    return 0;
}
