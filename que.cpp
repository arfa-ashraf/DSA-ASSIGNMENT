#include<iostream>
using namespace std;
// class QUEUE{
// private:
// int arr[50];
// int rear;
// int front;
// public:
// QUEUE(){
//     rear=front=-1;
// }
// bool isFull(){return rear==49;}
// bool isempty(){return front==-1;}

// void enqueue(int val){
// if(isFull()){cout<<"QUEUE OVERFLOW";  return;}
// if(isempty()){
//     front=rear=0;
// }    
// else {
//     rear++;
// }
//     arr[rear]=val;

// }
// void dequeue(){
//     if(isempty()){
//         cout<<"QUEUE UNDERLOW";
//         return;
//     }
// if(rear==front){front=rear=-1;}
// else{
// front++;
// }    

// }
// void peek(){
//     if(isempty()){
//         cout<<"QUEUE IS EMPTY:"; return;
//     }
//     cout<< arr[front];
// }
// void display(){
//     if(isempty()){cout<<"QUEUE IS EMPTY;";}
//     for(int i=front;i<=rear;i++){
//         cout<<arr[i]<<endl;
//     }
// }

// };
// int main(){
//     QUEUE Q1;
//     Q1.enqueue(23);
//      Q1.enqueue(2);
//       Q1.enqueue(33);
//       Q1.display();
//       Q1.dequeue();
//       Q1.peek();
//       Q1.display();
// return 0;
//     }
    //IMPLEMENTATION USING LINKED LIST
//     class Node{
//      public:
//      int data;
//      Node*next;
//      Node(int val){
// data=val;
// next=NULL;
//      }
//     };
//     class QUEUE{
// private:
// Node*front;
// Node*rear;
// public:
// QUEUE(){
//     front=rear=NULL;
// }
// bool isempty(){
//     return front ==NULL;
// }
 
// void enque(int val){
//     Node*newnode= new Node(val);
//     if(rear==NULL){
//        front=rear=newnode;
//     }
//     else{
//         rear->next=newnode;
//         rear=newnode;
//     }
// }
// void deque(){
//     if(front==NULL){
//         return;
//     }
//     if(front==rear){
//         delete rear;
//     }
//     if(front==rear){
//         front=rear=NULL;
//     }
//     else{
//         Node*temp=front;
//         front=front->next;
//         delete temp;
//     }
// }
// void peek(){
//     if(!isempty()){
//         cout<< front->data<<endl;
//     }

// }
// void print(){
//     Node*temp=front;
//     if(isempty()){
//         cout<<"QUEUE IS EMPTY";
//     }
//     while(temp!=NULL){
//         cout<<temp->data <<"->";
//         temp=temp->next;
//     }
// }
//     };

//     int main(){
//         QUEUE Q1;
//         Q1.enque(3);
//         Q1.enque(6);
//         Q1.enque(4);
//         Q1.print();
//         Q1.deque();
//         Q1.peek();
//         Q1.print();
//         return 0;
//     }
#define size 5
    //CIRCULAR QUEUE USING ARRAY
    class CQ{
     private:
    
     int arr[size];
     int front;
     int rear;
     public:
     CQ(){
        front=rear=-1;
     }
     
     void enque(int val){
        if((rear+1)%size==front){
               cout<<"QUEUE IS FULL:";
        }
        if(front==-1){
            rear=front=0;
        }
        else{
            rear=(rear+1)%size;
        }
        arr[rear]=val;
     }
     void deque(){
        if(front ==-1){ cout<<"QUEUE UNDERFLOW";}
        if(front ==rear){
            front=rear=-1;
        }
        else{
            front =(front+1)%size;
        }
       
     }
     void peek(){
        if(front==-1){cout<<"Queue is empty";}
        cout<<arr[front];
     }
     void display(){
        if(front==-1){
            cout<<"Queue is empty";
        }
        int i=front;
        while(true){
            cout<<arr[i];
            if(i==rear){break;}
            i=(i+1)%size;
        }
        cout<<endl;
     }
    };
    int main(){
        CQ Q1;
        Q1.enque(34);
        Q1.enque(4);
        Q1.enque(7);
        Q1.display();
        Q1.deque();
        Q1.peek();
        Q1.display();
        return 0;
    }