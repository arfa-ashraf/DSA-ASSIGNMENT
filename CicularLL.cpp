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
class CircularLL{
public:
Node* head;
Node*tail;
CircularLL(){
head=NULL;
tail=NULL;
}
void insertAtHead(int value){
    Node*newnode= new Node(value);
    if(tail==NULL){
        head=tail=newnode;
        tail->next=newnode;
    }else{
        newnode->next= head;
        tail->next= newnode;
        head=newnode;
    }
}
void insertAtTail(int value){
     Node*newnode= new Node(value);
    if(tail==NULL){
        head=tail=newnode;
        tail->next=head;
    }else{
        newnode->next=head;
        tail->next= newnode;
        tail= newnode;
    }

}
void deleteAtHead(int value){
    Node*temp=head;
    if(head==NULL){
        return;
    }
    if(head==tail){
        delete head;
        head=tail=NULL;
    }
    else{
head= head->next;
tail->next= head;
temp->next=NULL;
delete temp;
    }
}
void deleteAtTail(int value){
    Node*temp=tail;
      Node*pre=head;
    if(head==NULL){
        return;
    }
    if(head==tail){
        delete head;
        head=tail=NULL;
    }
    else{
        Node *pre =head;
        while(pre->next!=tail) {  //It will find the node before tail.
            pre =pre->next;
        }
        Node *temp=tail;
        tail=pre;             // make previous node the new tail
        tail->next=head;             // maintain circular connection
        temp->next=NULL;
        delete temp;
    }
}
void printInfo(){
    if (head == NULL)
        return;
    Node*temp= head;
    while (temp->next!=head
    )
    {  cout<< temp->data<< " ";
        temp =temp->next;
    }
    
}
};
int main(){
CircularLL CLL;
CLL.insertAtHead(1);
CLL.insertAtHead(2);
CLL.insertAtHead(3);
CLL.printInfo();
cout<<endl;
CLL.insertAtTail(4);
CLL.printInfo();
CLL.deleteAtHead(3);
CLL.printInfo();
CLL.deleteAtTail(4);
CLL.printInfo();
return 0;
}