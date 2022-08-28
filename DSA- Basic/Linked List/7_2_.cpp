// gfg approach

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

    int search(int key){
        Node* curr=this;
        int pos=0;
        while(curr!=NULL){
            if(curr->data==key){
                return pos;
            }
            curr=curr->next;
            pos++;
        }

        return -1;
    }
};

int main(){
    Node* head=new Node(10);
    
    Node* temp1=new Node(34);
    head->next=temp1;

    Node* temp2= new Node(76);
    temp1->next=temp2;

    Node* temp3=new Node(54);
    temp2->next=temp3;

    Node* temp4=new Node(23);
    temp3->next=temp4;

    Node* temp5= new Node(67);
    temp4->next=temp5;

    int x=head->search(23);

    cout<<x;
}