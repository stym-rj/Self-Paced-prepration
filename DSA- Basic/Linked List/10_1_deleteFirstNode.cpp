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

        Node* insertNodeAtBeginning(Node* head, int _data){
            Node* temp= new Node(_data);
            Node* curr=head;
            if(head==NULL)      return temp;
            while(curr->next!=NULL){
                curr=curr->next;
            }

            curr->next=temp;
            return head;
        }

        void traverseList(){
            Node* curr=this;
            while(curr->next!=NULL){
                cout<<curr->data<<endl;
                curr=curr->next;
            }
        }

        Node* deleteFirstNode(){
            if(this==NULL)      return this;
            
            Node* temp=this->next;
            delete(this);       // this is necessary to deallocate the dynamically allocated memory.
            return temp;
        }

};

int main(){
    Node* head=NULL;

    for(int i=0; i<8; i++){
        head=head->insertNodeAtBeginning(head, i);
    }

    head->traverseList();

    head=head->deleteFirstNode();

    cout<<"after deletion : "<<endl;
    head->traverseList();


    return 0;
}