
// STOCK SPAN PROBLEM

#include<iostream>
#include<vector>
#include<stack>

using namespace std;

// int main(){
//     vector <int> price={100,80,60,70,75,85};    // TC=O(n) , SC= O(n)

//     vector <int> ans(price.size(),0);

//     stack <int>s;
//     for(int i=0; i<price.size();i++){
       
//         while(s.size()>0 && price[s.top()]<=price[i]){
//             s.pop();
//         }
//         if(s.size()==0){
//               ans[i]=i+1;
//         }
//         else{
//             ans[i]= i- s.top();
//         }
//         s.push(i);
//     }

//     for(int val: ans){
//         cout<<val<< " ";
//     }
//     cout<< endl;
// }
// //PREVIOUS SMALLER ELEMENT PROBLEM
// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1) {
//         stack<int> s;
//       vector <int> ans;

//         for(int i= 0; i<=nums1.size(); i++){        // TC= O(m+n) as
//           while(s.size()>0 && s.top()>= nums1[i]){
//             s.pop();
//                     }
//              if(s.empty()) {
//                ans[i]= -1;
//              }      
//              else{
//               ans[i]=s.top();
//              }
//               s.push(nums1[i]);
//         }
       
        
//         return ans;
//     }
// };

// //IMPLEMENTATION USING ARRAY
// #include<iostream>
// using namespace std;

// class STACK{
// public:
// int arr[5];
// int top;
// STACK(){
//     top=-1;
// }
// void push(int value){
//    if(top==4){
//     cout<<"Overflow error!"<<endl;
//     return;
//    }
//    arr[++top]=value;
// }

// void pop(){
//     if(top==-1){
//         cout<<"Underflow error!"<<endl;
//        return;
//     }
//     top--;
// }
// int peek(){
//     if(top==-1){
//         cout<<"Stack is empty"<<endl;
//         return -1;
//     }
//     return arr[top];
// }
// bool isEmpty(){
//    return top==-1;
// }
// bool isFull(){
//     return top==4;
// }
// void display(){
//     if(isEmpty()){
//         cout<<"Stack is empty!"<<endl;
//     }
//     for(int i=top; i>=0;i--){
//         cout<<arr[i]<<endl;

//     }
// }

// };
// int main(){
//     STACK s;
//     s.push(10);
//         s.push(20);
//             s.push(30);
//             s.display();
//             s.peek();
//             s.pop();
//             s.display();
//             return 0;
// }
//STACK IMPLEMETATION USING LINKED LIST

// class Node{
// public:
// int data;
// Node*next;
// Node(int val){
//     data=val;
//     next=NULL;
// }

// };
// class Stack{
// private:
// Node*top;
// public:
// Stack(){
//    top=NULL;
// }
// void push(int val){
//     Node*newnode= new Node(val);
//     newnode->next=top;
//     top=newnode;
// }
// void pop(){
//     if(top==NULL){
//         cout<<"Stack is empty!"<<endl;
//         return;
//     }
//     Node*temp=top;
//     top=top->next;
//     delete temp;

// }
// void peek(){
//     if(top==NULL){
//         cout<<"Stack is empty";
//     }
//     cout<< top->data;
// }

// void printStack(){
//     if(top==NULL){
//         cout<<"Stack is empty";
//     }
//     Node*temp=top;
//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         temp=temp->next;
//     }
// }

// };
// int main(){
// Stack s2;
// s2.push(2);
// s2.push(3);
// s2.push(24);
// s2.printStack();
// // s2.pop();
// // s2.printStack();
// // s2.peek();
// // s2.printStack();
// return 0;
// }
//Implemetation using array 
class STACK{
private:
int arr[50];
int top;
public:
STACK(){
    top=-1;
}
void push(int val){
    if(top==49){
        cout<<"STACK OVERFLOW!";
    }
    arr[++top]=val;
}
void pop(){
    if(top==-1){
        cout<<"Stack underflow!";
    }
    top--;
}
int peek(){
    if(top==-1){
        cout<<"Stack is empty";
    }
    return arr[top];
}
bool Isempty(){
    return top==-1;
}
bool isFull(){
    return top==4;
}
void print(){
    if(Isempty()){
       cout<<"STACK IS EMPTY"; 
    }
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<endl;
    }
}

};
int main(){
    STACK S1;
    S1.push(4);
      S1.push(5);
        S1.push(6);
        S1.print();
        S1.pop();
        S1.print();
        return 0;
}