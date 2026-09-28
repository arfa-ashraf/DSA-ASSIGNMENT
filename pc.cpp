#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
Node(int value){
    data=value;
    next=NULL;
}
Node *detectCycle(Node*head){
    Node *slowPointer= head;
    Node *fastPointer =head;
   bool Hascycle=false;
   while(fastPointer!=NULL && fastPointer->next!=NULL){
     slowPointer= slowPointer->next;
     fastPointer= fastPointer->next->next;
      if(slowPointer==fastPointer){
        Hascycle=true;
        break;
      } 

      }
if(!Hascycle){
        return NULL;
      
   }
   slowPointer=head;
   Node *previousPointer= NULL;
   while(slowPointer!=fastPointer){
    slowPointer=slowPointer->next;
       previousPointer=fastPointer;
       fastPointer=fastPointer->next;
   }
   previousPointer->next=NULL;
   return slowPointer;

}
};
int main(){
Node*first= new Node(10);
Node*second= new Node(23);
Node*third= new Node(14);
Node*fourth= new Node(16);
Node*head= first;
first->next= second;
second->next=third;
third->next= fourth;
fourth->next= second;

Node *obj=(0);
Node*cycleStart= obj->detectCycle(head);

if(cycleStart!=NULL){
    cout<<"cycle start at:"<<cycleStart->data<<endl;
}else{
    cout<<"No cycle detected!"<<endl;

}
return 0;


    cout<<"Hello World"<<endl;
    return 0;
}


