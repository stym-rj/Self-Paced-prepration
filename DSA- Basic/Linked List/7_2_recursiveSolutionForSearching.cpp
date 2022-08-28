#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int _data){
        data= _data;
        next = NULL;
    }

    int reccSearch(Node* head, int key, int pos){
        if(head==NULL)      return -1;
        if(head->data==key)     return pos;
        return reccSearch(head->next, key, ++pos);
    }
};

int main(){
    Node* head=new Node(45);
    Node* temp1=new Node(87);
    Node* temp2=new Node(90);
    Node* temp3=new Node(3333);
    Node* temp4=new Node(543);

    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;

    int x= head->reccSearch(head, 3333, 0);

    cout<<x;
}