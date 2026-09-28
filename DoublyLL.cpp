#include<iostream>
using namespace std;
class Node{
public:
int data;
Node*next;
Node *previous;
Node(int val){
   data= val;
   next=NULL;
   previous= NULL;
}
};
class DoublyLL{
public:
Node* head;
Node*tail;
DoublyLL(){
head=NULL;
tail=NULL;
}
void push_front(int value){
    Node* newnode= new Node(value);
    if(head==NULL){
        head= tail=newnode;
        return;
    }
    else{
        newnode->next= head;
        head->previous= newnode;
        head= newnode;
    }
}
void push_back(int value){
    Node* newnode= new Node(value);
    if(head==NULL){
        head= tail=newnode;
        return;
    }else{
        newnode->previous= tail;
        tail->next= newnode;
        tail= newnode;
    }
}
void pop_front(int value){
    Node*temp =head;
    head= head->next;
    if(head!=NULL){
        head->previous= NULL;
    }
    temp->next=NULL;
    delete temp;
}
void pop_back(int value){
     Node*temp =tail;
     tail= tail->previous;
     if(tail!=NULL){
        tail->next=NULL;
     }
     temp->previous=NULL;
     delete temp;
}
void print(){
    Node*temp=head;
    while(temp!=NULL){
        cout<< temp->data<<" <=> ";
        temp= temp->next;
    }
}
void printreverse(){
    Node*temp=tail;
    while(tail!=NULL){
        cout<<temp->data;
        temp=temp->previous;
    }
}

};
int main(){
    DoublyLL ll;
    ll.push_front(12);
    ll.push_front(0);
    ll.push_front(3);
    ll.print();
    cout<<endl;
    ll.pop_front(3);
    ll.print();
     cout<<endl;
    ll.pop_back(12);
    ll.print();
    return 0;
}