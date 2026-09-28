#include<iostream>
using namespace std;

class Node{
public:
int data;
Node *next;
Node(int val){
    data= val;
    next= NULL;
}
};

class LinkedList{
public:
Node *head;
Node *tail;
LinkedList(){
    head= tail= NULL;
}
// push elements in front 
void push_front(int value){
  Node *newnode= new Node(value);
  if(head==NULL){       // if NODE is completely empty
      head= tail= newnode;
      return;
  } else{             //if NODE has some elements
    newnode->next= head;
    head=newnode;   //Here we are updating new head
  } 
}
// push element at back
void push_back(int value){
  Node *newnode= new Node(value);
  if(head==NULL){
    head=tail= newnode;
    return;
  }else{
    tail->next= newnode;
    tail= newnode;
  }
}
// delete from front 
void pop_front(int value){
    if(head==NULL){
        return;
    }
    
    Node*temp= head;
    head= head->next;
    temp->next=NULL;
    delete temp;
}
void pop_back(int value){
      if(head==NULL){
        return;
    }
    Node *temp =head;
    while(temp->next!=tail){
         temp = temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail= temp;
}

void insert(int value, int pos){
    if(pos<0){
        return;
    }
    if(pos==0){
        push_front(value);
        return;
    }
    
        Node *TEMP= head;
        for(int i=0; i<pos-1; i++){
            if(TEMP==NULL){
                cout<<"Invalid position"<<endl;
                return;
            }  // finding previous
           TEMP =  TEMP->next; 
        }
        Node *newnode= new Node(value);
        newnode->next= TEMP->next;
        TEMP ->next= newnode;
    
}
int searchindex(int key){
    Node *temp= head;
    int index=0;
    while(temp!=NULL){
        if(temp->data==key){
            return index;
        }
        temp= temp->next;
        index++;
    }
    return -1;

}
void printLIst(){
    Node*temp= head;
    while(temp!=NULL){
        cout<< temp->data<<" ";
        temp= temp->next;

    }
}
void printreverse(Node*head){
    if(head==NULL){return;}
    printreverse(head->next);
    cout<<head->data; 
}
} ;
int main(){
    LinkedList LL;
    LL.push_front(3);
    LL.push_front(2);
    LL.push_front(1);
    LL.printLIst();
    cout<<endl;
     LL.insert(5,2);
     LL.printLIst();
     cout<<endl;
    LL.push_back(4);
    LL.printLIst();
    cout<<endl;
    cout<<LL.searchindex(5);
    cout<<endl;
    LL.pop_front(1);
    LL.printLIst();
    cout<<endl;
    LL.pop_back(4);
    LL.printLIst();
    cout<<endl;
   

    return 0;
}
//CODE FOR REMOVING CYCLE FROM LINKED LIST

 /* Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };*/
 
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode*slow= head;
//         ListNode*fast= head;
//         bool hasCycle=false;
//         while(fast!=NULL && fast->next!=NULL){    // CHECK CYCLE EXISTS OR NOT
//             slow= slow->next;
//             fast= fast->next->next;
//             if(slow==fast){
//                 hasCycle=true;
//                 break;
//             }
//         }if(!hasCycle){
//             return NULL;
//         }
    
//     slow=head;
//     ListNode*previous= NULL;

//     while(slow!=fast){          // DETECT CYCLE POSITION AND REMOVING
//        slow= slow->next;
//        previous= fast;
//        fast= fast->next;
     
//     } previous->next=NULL;
//      return slow;
//     }
// };