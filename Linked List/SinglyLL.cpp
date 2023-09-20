#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head, int data){
    //create a new node & inserting into head
    Node* temp= new Node(data);
    temp->next=head;
    head=temp;
}
void Print(Node* &head){
    Node* temp= head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp  = temp->next;

    }
}
int main(){
    //created a new node
    Node* node1 = new Node(10);
    //node pointing to the head
    Node* head= node1;
    Print(head);
    
    insertAtHead(head,12);
    Print(head);

    insertAtHead(head,13);
    Print(head);
    
    return 0;
}