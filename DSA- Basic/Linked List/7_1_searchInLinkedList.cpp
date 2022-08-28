//own try

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int _data){
        data=_data;
        next=NULL;
    }

    void search(){
        Node* curr=this;
        int pos=0;
        int count=0;
        while(curr!=NULL){
            if(curr->data==56){
                cout<<"element found at location : "<<pos<<endl;
                count++;
                break;
            }
            curr=curr->next;
            pos++;
        }

        if(!count){
            cout<<"element not found"<<endl;
        }
    }
};


int main(){
    Node* head=new Node(10);
    Node* temp1=new Node(43);
    Node* temp2=new Node(23);
    Node* temp3=new Node(569);
    Node* temp4=new Node(56);
    Node* temp5=new Node(32);

    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=temp5;

    head->search();
}