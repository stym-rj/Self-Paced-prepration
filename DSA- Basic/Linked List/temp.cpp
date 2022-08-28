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
    Node* a=NULL;
    
    cout<<a->data<<endl;
    cout<<a->next<<endl;
    
}