#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int key=arr[i];
        while(j>=0 &&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        cout<<"After iteration:"<<i <<" ";
        for(int k=0;k<n;k++){
            cout<<arr[k] <<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[6];
cout<<"Enter array elements:"<<endl;
for(int i=0;i<6;i++){
    cin>>arr[i];
}
cout <<"Original array:"<<endl;
for(int i=0;i<6;i++){
    cout<<arr[i] <<" " <<endl;
}
insertionSort(arr,6);
cout<<"Sorted array :"<<endl;
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
return 0;
}

//QUES:02

// #include<iostream>
// using namespace std;

// int *resizeSize(int *oldArray, int position, int oldSize, int newCapacity){
    
//    int newSize=oldSize+1;
//     int *newArray= new int [newSize];
//     if(position<0 || position>newSize){
//         cout<<"Invalid position!"<<endl;
//         return oldArray;
//     }  
   
//     for(int i=0;i<position;i++){
//         newArray[i]=oldArray[i];
//     }

//     newArray[position]=newCapacity;
//     for(int i=position;i<oldSize;i++){
//         newArray[i+1]=oldArray[i];
//     }
//     delete []oldArray;
//     return newArray;
// }

// void sortArray(int arr[], int n){
//     for(int i=1;i<n;i++){
//         int key=arr[i];
//         int j=i-1;

//         while(j>=0 && arr[j]>key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//     }
// } 
// int main(){
//    int size;
 
//    cout<<"Enter number of shelves:"<<endl;
//    cin>>size;
//    int *arr= new int[size];
//    cout<<"Enter book capacity of each shelves:"<<endl;
//    for(int i=0;i<size;i++){
//     cin>>arr[i];
//    }

//    //Printing original capacity
//    cout<<"Original shelves capacity:"<<endl;
//    for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//    }

// int postion;
// int newCapacity;

//  cout<<"Enter position to add new shelves:"<<endl;
// cin>> postion;
// cout<<"Enter capacity of new shelve:"<<endl;
// cin>>newCapacity;

// int newSize= size+1;
// arr= resizeSize(arr,postion, size, newCapacity);
// for(int i=0;i<size;i++){
 
// //Printing after adding new shelve 
// cout<<"Shelves after adding new shelves:"<<endl;
//    for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//    }
   
// sortArray(arr,newSize);
//  //Printing after sorting 
// cout<<"Shelves after sorting :"<<endl;
//    for(int i=0;i<newSize;i++){
//     cout<<arr[i]<<" ";
//    }
// delete[]arr;


// return 0;
// }
// }


//QUES:03

// #include <iostream>
// using namespace std;

// void combSort(int arr[], int n) {
//     int gap = n;
//     bool swapped = true;

//     while (gap > 1 || swapped) {

//         // Reduce the gap using shrink factor 1.3
//         gap = gap / 1.3;

//         if (gap < 1) {
//             gap = 1;
//         }

//         swapped = false;

//         // Compare elements separated by the gap
//         for (int i = 0; i + gap < n; i++) {
//             if (arr[i] > arr[i + gap]) {
//                 int temp = arr[i];
//                 arr[i] = arr[i + gap];
//                 arr[i + gap] = temp;

//                 swapped = true;
//             }
//         }

//         // Display gap and array after each pass
//         cout << "Gap value: " << gap << endl;

//         cout << "Array after this pass: ";
//         for (int i = 0; i < n; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl << endl;
//     }
// }

// int main() {
//     int arr[8];

//     cout << "Enter 8 package weights:" << endl;

//     for (int i = 0; i < 8; i++) {
//         cin >> arr[i];
//     }

//     cout << "Original array: ";
//     for (int i = 0; i < 8; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl << endl;

//     combSort(arr, 8);

//     cout << "Final sorted array: ";
//     for (int i = 0; i < 8; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
//QUES:04
// #include<iostream>
// using namespace std;
// class Node {
// public:

// string RiderID;
// string name;
// int AssignedOrders;
// Node *next;
// Node(string id, string n, int orders){
// next=NULL;
// RiderID=id;
// name=n;
// AssignedOrders=orders;

// }
// };
// class Riders{
// private:
// Node *head;
// Node *tail;
// int count=0;
// public:
// Riders(){
//     head=tail=NULL;
//     count++;
// }
// void InsertAtBegin(string id, string n, int orders){
//    Node *newnode= new Node(id,n, orders);
//     if(tail==NULL){
//         head=tail=newnode;
//         tail->next=newnode;
//     }
//     else {
//         newnode->next= head;
//         tail->next=newnode;
//         head=newnode;
//     }
// }
// void InsertAtEnd(string id, string n, int orders){
//     Node *newnode= new Node(id,n, orders);
//     if(tail==NULL){
//         head=tail=newnode;
//         tail->next=newnode;
//     }
//     else {
//         newnode->next=head;
//         tail->next=newnode;
//         tail=newnode;
//     }
// }
// void InsertAtPos(string id, string n, int orders, int pos){
    
//     if(pos<0){return;}
//     if(pos==0){InsertAtBegin(id,n,orders);
//     return;}
//     if(head==NULL){  cout<<"Invalid position!"<<endl;
//         return;}
//     Node *newnode= new Node(id,n, orders);
    
//     Node *temp=head;
//     for(int i=0;i<pos-1;i++){
//         if(temp==head){
//             cout<<"Invalid position!"<<endl;
            
//             return;
//         }
//         temp=temp->next;
//     }
//     newnode->next=temp->next;
//     temp->next=newnode;
//     if(temp=tail){
//         tail=newnode;
//     }
// }

// void deleteAtBegining(){
//     Node*temp=head;
//     if(head==NULL){return;}
//     if(head==tail){
//         delete tail;
//         head=tail=NULL;
//         return;
//     }
//     head=head->next;
//     tail->next=head;
//     temp->next=NULL;
//     delete temp;
// }

// void deleteAtEnd(){
//     Node*temp=tail;
//     Node*pre=head;
//     if(head==NULL){return;}
//     if(head==tail){
//         delete tail;
//         head=tail=NULL;
//         return;
//     }
//     while(pre->next!=tail){
//         pre=pre->next;
//     }
//     tail=pre;
//     tail->next=head;
//     temp->next=NULL;
//     delete temp;
// }
// void deleteFromPosition(int pos){
//     if(head==NULL ||pos<0){return;}
//     if(pos==0){deleteAtBegining();
//     return;}
// Node *temp=head;
//     for(int i=0;i<pos-1;i++){
//         if(temp==NULL){
//             cout<<"Invalid position!"<<endl;
//             return;
//         }
//         temp=temp->next;
//     }
// Node*deleteNode=temp->next;
// if(deleteNode==head){
//      cout<<"Invalid position!"<<endl;
//         return;
// }

// temp->next=deleteNode->next;
// if(deleteNode==tail){
//     tail=temp;
// }
// delete deleteNode;
// }

// int searchindex(string key){
//     Node *temp= head;
//     int index=0;
//    do{
//     if(temp->RiderID==key){
//         return index;
//     }
//     temp=temp->next;
//     index++;
//    }while(temp!=head);
    
//     return -1;

// }
// void displayInfo(){
//     if(head==NULL){return;}
//     Node*temp=head;
//     do{
//         cout<<temp->name<<endl;
//         temp=temp->next;
//     }while(temp!=head);
// }

// void updateRider(string id, string Newname, int Neworders){
//     if(head==NULL){return;}
//     Node*temp=head;
//     do{
//         if(temp->RiderID==id){
//             temp->name=Newname;
//             temp->AssignedOrders=Neworders;
//             return;
//         }
//     temp=temp->next;
//     }while(temp!=head);
// }

// int countRiders()
// {
//     if(head==NULL)
//         return 0;

//     int count=0;
//     Node* temp=head;

//     do
//     {
//         count++;
//         temp=temp->next;

//     }while(temp!=head);

//     return count;
// }
// };

//QUES:05
// #include<iostream>
// using namespace  std;

// class Product{
// public:
// int ProductID;
// string name;
// string category;
// float price;
// Product*next;
// Product(int id, string n, string c, float p){
//     ProductID=id;
//     name=n;
//     category=c;
//     price=p;
//     next=NULL;
// }
// };
// class ProductList{
// private:
// Product*head;
// Product*tail;
// public:
// ProductList(){
//     head=tail=NULL;
// }
// void addProduct(int id, string name, string c,float price){
//     Product *newproduct= new Product(id,name,c,price);
//     Product *temp=head;
//     Product*pre=NULL;
  
//     if(head==NULL){
//         head=tail=newproduct;
//         return;
//     }

//     if(id< head->ProductID){
//        newproduct->next=head;
//        head=newproduct;
//        return;
//     }
//     else{
//         while(temp!=NULL && temp->ProductID<id){
//          pre=temp;
//             temp=temp->next;
//         }
//         if(temp!=NULL &&temp->ProductID==id){
//             delete newproduct;
//             cout<<"Duplicate product id!"<<endl;
//             return ;
//         }
//           newproduct->next=temp;
//             pre->next=newproduct;
//       if(temp==NULL){
//         tail=newproduct;
//       }
// }
// }
// void display(){
//     Product*temp=head;
//     while(temp!=NULL){
//         cout<<temp->ProductID;
//         cout<<temp->name;
//         cout<<temp->category;
//         cout<<temp->price;
//   temp=temp->next;
//     }
// }
// void mergeLists(ProductList&other){
//     Product*p1=head;
//     Product*selected;
//     Product*p2=other.head;
//     Product*masterHead=NULL;
//     Product*masterTail=NULL;
   
//     while(p1!=NULL && p2!=NULL){
//       if(p1->ProductID< p2->ProductID){
//           selected=p1;
//         p1= p1->next;
//       }
//       else if(p2->ProductID< p1->ProductID){
//          selected=p2;
//           p2= p2->next;
//       }
//       else{
//          Product*NEXT1=p1->next;
//     Product*NEXT2=p2->next;
//           if(p1->price< p2->price){
//         selected=p1;
//         delete p2;
//       } else{
//         selected=p2;
//         delete p1;
//       }
//      p1=NEXT1;
//       p2=NEXT2;
//       }
//       selected->next=NULL;
//     if(masterHead==NULL){
//         masterHead=masterTail=selected;
//     }else{
//         masterTail->next=selected;
//         masterTail=selected;
//     }
//     }
//     if(p1!=NULL){
//          masterTail->next=p1;
//     while(masterTail->next != NULL){
//     masterTail = masterTail->next;
//     }
//     }
        
//     if(p2!=NULL){
//         masterTail->next=p2;
//         while(masterTail->next!=NULL){
//             masterTail=masterTail->next;
//         }
//     }
//     head=masterHead;
//     tail=masterTail;
// }
// void displaySummary(){
//     Product*temp=head;
//     int count=0;
//     float total=0.0;
//     while(temp!=NULL){
//         count++;
//         total = total +temp->price;
//         temp=temp->next;
//     }
//     cout<<"Total number of Products:"<<count<<endl;
//     cout<<"Total Inventory value:"<<total<<endl;
// }

// };
// int main(){
//     ProductList GlowCare ;
//     ProductList BeautyHub;
   
//     GlowCare.addProduct(1466,"Moisturizer","Premium",1200);
//     BeautyHub.addProduct(1466,"SunBlock","Classic",890);
//     GlowCare.display();
//     cout<<endl;
//     BeautyHub.display();
//         cout<<endl;
    // GlowCare.mergeLists(BeautyHub);
    //     cout<<endl;
    // GlowCare.display();
    //     cout<<endl;
    // GlowCare.displaySummary();
//      return 0;
// }

//QUES06
// #include <iostream>
// using namespace std;

// class Song
// {
// public:
//     string title;
//     string genre;
//     int duration;
//     bool flag;
//     Song *next;
//     Song(string t, string g, int d, bool f)
//     {
//         title = t;
//         genre = g;
//         duration = d;
//         flag = f;
//         next = NULL;
//     }
// };
// class Playlist
// {
// private:
//     Song *head;
//     Song *tail;

// public:
//     Playlist()
//     {
//         head = tail = NULL;
//     }

//     void InsertAtPosition(string title, string genre, int d, bool flag, int pos)
//     {

//         if (pos < 0)
//         {
//             return;
//         }
//         Song *newSong = new Song(title, genre, d, flag);

//         if (genre != "pop" && genre != "rock" && genre != "jazz" && genre != "classical" && genre != "electronic")
//         {
//             cout << "Invalid genre !" << endl;
//             delete newSong;
//             return;
//         }
//         if (pos == 0)
//         {
//             if (head != NULL && head->genre == newSong->genre)
//             {
//                 cout << "Inavlid genre!";
//                 delete newSong;
//                 return;
//             }

//             if (head != NULL && head->next != NULL)
//             {
//                 if (newSong->duration + head->duration + head->next->duration > 600)
//                 {
//                     cout << "Duration exceeds!" << endl;
//                     delete newSong;
//                     return;
//                 }
//             }
//             newSong->next = head;
//             head = newSong;
//             if (tail == NULL)
//             {
//                 tail = newSong;
//             }
//             return;
//         }
//         else
//         {
//             while (true)
//             {
//                Song *temp = head;
//                 Song *pre = NULL;

//                 for (int i = 0; i < pos - 1; i++)
//             {
//                 if (temp == NULL)
//                 {
                    
//                     break;
//                 }
//                 pre = temp;
//                 temp = temp->next;
//             }
//          if (temp == NULL)
//             {
//               pos++;
//               continue;
//             }
//             if (temp->genre == newSong->genre || temp->next!=NULL && temp->next->genre==newSong->genre)
//             {
              
//                 pos++;
//                 continue;
//             }

//             if (pre != NULL && pre->duration + temp->duration + newSong->duration > 600)
//             { // case 01 when A+B+new
//                 pos++;
//                 continue;
//             }


//              if (temp->next != NULL && temp->duration + newSong->duration + temp->next->duration > 600)
//             {
//                 pos++;
//                 continue;
                
//             }

//              if (temp->next != NULL && temp->next->next != NULL && newSong->duration + temp->next->duration + temp->next->next->duration > 600)
//             {
//                 pos++;
//                 continue;
//             }
//             newSong->next = temp->next;
//             temp->next = newSong;
//             if (newSong->next == NULL)
//             {
//                 tail = newSong;
//             }
//        return; 
//             }
          
//         }
        
//     }
//     void deleteAtpos(int pos)
//     {
//         Song *temp = head;
//         Song *pre = NULL;
//         if (pos < 0)
//         {
//             return;
//         }
//         if (head == NULL)
//         {
//             cout << "Playlist is empty";
//             return;
//         }
//         if (pos == 0)
//         {
//             if (temp->flag == true)
//             {
//                 temp->flag = false;
//                 return;
//             }
//             head = head->next;
//             delete temp;
//             if (head == NULL)
//             {
//                 tail = NULL;
//             }
//             return;
//         }

//         else
//         {
//             for (int i = 0; i < pos ; i++)
//             {
//                 if (temp == NULL)
//                 {
//                     cout << "Inavalid pos";
//                     return;
//                 }
//                 pre = temp;
//                 temp = temp->next;
//             }
//             if (temp == NULL)
//             {
//                 cout << "Inavalid pos";
//                 return;
//             }

//             if (temp->flag == true)
//             {
//                 temp->flag = false;
//                 return;
//             }
//             if (temp->next != NULL && pre->genre == temp->next->genre)
//             {
//                 cout << "Cannot delete : same genre would become adjacent";
//                 return;
//             }

//             if (temp == tail)
//             {
//                 tail = pre;
//             }
//             pre->next = temp->next;
//             temp->next = NULL;
//             delete temp;
//         }
//     }
//     int searchSong(string title)
//     {
//         Song *temp = head;

//         int index = 0;
//         while (temp != NULL)
//         {
//             if (temp->title == title)
//             {
//                 return index;
//             }
//             temp = temp->next;
//             index++;
//         }
//         return -1;
//     }

//     void display()
// {
//     Song *temp = head;

//     while (temp != NULL)
//     {
//         cout << "Title: " << temp->title << endl;
//         cout << "Genre: " << temp->genre << endl;
//         cout << "Duration: " << temp->duration << endl;
//         cout << "Explicit: " << temp->flag << endl;
//         cout << "------------------" << endl;

//         temp = temp->next;
//     }
// }
// };

// int main()
// {
// Playlist L1;
//  L1.InsertAtPosition("Song1", "pop", 100, false, 0);
//     L1.InsertAtPosition("Song2", "rock", 100, false, 1);
//     L1.InsertAtPosition("Song3", "jazz", 100, false, 2);

//     cout << "Before insertion:" << endl;
//     L1.display();

//     // Try to insert a ROCK at position 1
//     // Position 1 is invalid because ROCK is already next to ROCK.
//     // Your code should try position 2, then position 3.
//     L1.InsertAtPosition("Song4", "rock", 100, false, 1);

//     cout << "\nAfter insertion:" << endl;
//     L1.display();
//     return 0;
// }

//QUES:07
// #include<iostream>
// #include<cstdlib>
// using namespace std;
// class Combatant {
// public:
// string name;
// int healthpoints ;  // ranges from (1-70)
// int power ; // ranges from 1-5
// Combatant *next;
// Combatant*pre;
// Combatant(string n, int h, int p){
//   name=n;
//   healthpoints=h;
//   power=p;
//   next=NULL;
//    pre=NULL;
// }

// };
// class Team{
// private:
// Combatant *head;
// Combatant*tail;
// int count;
// public:
// Team(){
//     head=tail=NULL;
//     count=0;
// }
//   void insertAtEnd(string name, int points, int power){
//     Combatant*newnode = new Combatant(name, points, power);
//     if(head==NULL){
//        head=tail=newnode;
//     }
//     else{
// newnode ->pre= tail;
//         tail->next=newnode;
//         tail=newnode;
//     }
//          count++;
//   }
//   void removeAtpos(int pos){
//     if(pos<0|| head==NULL){return;}
//     if(pos==0){
//       Combatant*temp=head;
//       head=head->next;
//      if(head!=NULL){ head->pre=NULL;}
//      else{
//         tail=NULL;
//      }
//      delete temp;
//      count--;
//     }
//     else{
//     Combatant*curr=head;
//     for(int i=0;i<pos;i++){
//         if(curr==NULL){cout<<"Invalid pos!"<<endl;
//         return;}
//         curr=curr->next;
//     }
//     if(curr==NULL){
//         {cout<<"Invalid pos!"<<endl;
//         return;
//     }
// }
//     curr->pre->next= curr->next;
//     if(curr->next!=NULL){
//         curr->next->pre= curr->pre;
//     }else{
//        tail= curr->pre;
//     }
//     delete curr;
// count--;
//     }
//   }


//   Combatant *findBypos(int pos){
//     Combatant*temp=head;
//     if(pos<0){return NULL;}
//     int index=0;
//       while(temp!=NULL){
//          if(index==pos){
//             return temp;
//          }
//          temp=temp->next;
//          index++;
//       }
//       return NULL;
//   }
//   int findByname(string name){
//     Combatant*temp=head;
//     int index=0;
// while(temp!=NULL){
//     if(temp->name==name){
//         return index;
//     }
//     temp=temp->next;
//     index++;
// }
// return -1;
//   }
//   void removeByname(string name){
//     int pos =findByname(name);
//     if(pos!=-1){
//         removeAtpos(pos);
//     }
//     else{
//         cout<<" Name not found"<<endl;
//     }
//   }
//   void display(){
//     Combatant*temp=head;
//     while(temp!=NULL){
//         cout<<temp->name<<endl;
//         temp=temp->next;
//     }
//     cout<<endl;
//   }
//   int calculateTotalhealth(){
//      Combatant*temp=head;
//      int total=0;
//     while(temp!=NULL){
//         total+= temp->healthpoints;
//         temp=temp->next;
//     }
// return total;
//   }
//   bool Isempty(){
//     return head==NULL;
//   }

//   void displayResults(){
//     Combatant *temp=head;
//       while(temp!=NULL){
//       cout<<"Name:"<<temp->name<<endl;
//       cout<<"Health Points:"<<temp->healthpoints<<endl;
//       cout<<"Power:"<<temp->power<<endl;

//       temp=temp->next;
//       }
    
// }
// };
// class BattleGame{
// private:
// Team enemy;
// Team hero;

// public:

// int calculateDamge(Combatant*attacker){
//       int randomvalue= rand()%3+1;
//     int damage = attacker->power * randomvalue;
// return damage;
// }

// void initializeTeam(){
//     hero.insertAtEnd("hero1", 60,4);
//      hero.insertAtEnd("hero2", 50,5);
//       hero.insertAtEnd("hero3", 50,3);
//        hero.insertAtEnd("hero4", 45,4);
//         hero.insertAtEnd("hero5", 40,4);

//   enemy.insertAtEnd("enemy1", 60,5);
// enemy.insertAtEnd("enemy2", 50,4);
// enemy.insertAtEnd("enemy3", 55,4);
// enemy.insertAtEnd("enemy4", 40,3);
// enemy.insertAtEnd("enemy5", 45,4);
// }
// void removeComabatant(Team &mem, int pos){
//     mem.removeAtpos(pos);
// }
// void attackAtpos(Team &attacker, Team &opponent){
//     int attackerPos;
//     int targetPos;
//     cout<<"Enter attacker position:"<<endl;
//     cin>>attackerPos;
//     Combatant*ATTACKER= attacker.findBypos(attackerPos);
//     if(ATTACKER==NULL){
//         cout<<"Inavlid position";
//         return;
//     }

//     cout<<"Enter target's position:"<<endl;
//     cin>>targetPos;
//     Combatant*TARGET= opponent.findBypos(targetPos);
//     if(TARGET==NULL){
//         cout<<"Invalid position!"<<endl;
//         return;
//     }

  
// int damage = calculateDamge(ATTACKER);
//  TARGET->healthpoints=TARGET->healthpoints-damage;
// cout<<ATTACKER->name <<"attacked"<<TARGET->name<<endl;
// if(TARGET->healthpoints<=0){
//     removeComabatant(opponent,targetPos);
// }
// }
// void displaynamesonly(){
//     cout<<"Hero:"<<endl;
//     hero.display();

//     cout<<"Enemy:"<<endl;
//     enemy.display();
// }

// void checkWin(){
    
//     if(hero.Isempty()){
//       cout<<"Enemy wins!"<<endl;
//     }
//     else if(enemy.Isempty()){
//         cout<<"Hero wins!"<<endl;
//     }
//     else{
//          int heroHealth = hero.calculateTotalhealth();
//         int enemyHealth = enemy.calculateTotalhealth();

//         if(heroHealth > enemyHealth){
//             cout<<"Hero wins!"<<endl;
//         }
//         else if(enemyHealth > heroHealth){
//             cout<<"Enemy wins!"<<endl;
//         }
//         else{
//             cout<<"Game draws!"<<endl;
//         }
//     }

// }
// void displayFinalResults()
// {
//     cout << "FINAL RESULTS" << endl;

//     if(hero.Isempty())
//     {
//         cout << "Enemies WIN!" << endl;
//         enemy.displayResults();
//     }
//     else if(enemy.Isempty())
//     {
//         cout << "Heroes WIN!" << endl;
//         hero.displayResults();
//     }
    
//     else
// {
//     int heroHealth = hero.calculateTotalhealth();
//     int enemyHealth = enemy.calculateTotalhealth();

//     if(heroHealth > enemyHealth)
//     {
//         cout << "Heroes WIN!" << endl;
//         hero.displayResults();
//     }
//     else if(enemyHealth > heroHealth)
//     {
//         cout << "Enemies WIN!" << endl;
//         enemy.displayResults();
//     }
//     else
//     {
//         cout << "GAME DRAW!" << endl;

//         cout << "Heroes:" << endl;
//         hero.displayResults();

//         cout << "Enemies:" << endl;
//         enemy.displayResults();
//     }
// }
// }
// void startBattle(){
//     initializeTeam();
//     for(int i=1;i<=10;i++){
//         attackAtpos(hero,enemy);
//         if(enemy.Isempty()){break;}
//         displaynamesonly();
//         attackAtpos(enemy,hero);
//         if(hero.Isempty()){break;}
//         displaynamesonly();
//     } 
//     checkWin();
//     displayFinalResults();
// }

// };

//QUES:08
// #include<iostream>
// using namespace std;
// class Node{
// public:
// char data;
// Node*next;

// Node(char pos){
//    data=pos;
//     next=NULL;
// }
// };
// class GAME{
//     private:
// Node*top;
//     public:
//     GAME(){
//         top=NULL;
//     }
//     void push(char pos){
//         Node*newnode=new Node(pos);
//         newnode->next=top;
//         top=newnode;
//     }
    
//     char pop(){
//         if(top==NULL){
//             return '\0';
//         }
//         char ch= top->data;
//         Node*temp= top;
//         top= top->next;
//         delete temp;
//         return ch;
//     }
//     bool isempty(){
//         if(top==NULL){
//            return true;
//         }  else{
//             return false;
//         }
       
//     }
//     void displayInfo(){
//         Node*temp= top;
//         while(temp!=NULL){
//             cout<<temp->data;
//             temp= temp->next;
//         }
//     }

// };
// int main(){
//     GAME g;
//     cout<<"Enter number of commmands:"<<endl;
//     int n;
//     cin>>n;
//     int position=0;
//     int successfulMovements=0;
//     int successfullUndo=0;
//     for(int i=0;i<n;i++){
//         cout<<"Enter command:"<<endl;
//         char command;
//         cin>>command;
//         if(command=='R'){
//             position++;
//             g.push('R');
//             successfulMovements++;
//         }
//         else if(command=='L'){
//             if(position-1>=0){
//                 position--;
//                 g.push('L');
//                 successfulMovements++;
//             }
//         }
//         else if(command=='J'){
//             position+=2;
//             g.push('J');
//             successfulMovements++;
//         }
//         else if(command=='B'){
            
//                 if(!g.isempty()){
//                     char last=g.pop();
//                     if(last=='R'){
//                          position--;

//                     }   else if(last=='L'){
//                         position++;
//                     }
//                     else if(last=='J'){
//                     position-=2;
//                     }
//                     successfullUndo++;
//                 }
//             }
//         }
     
//     cout<<"Final position:"<<position<<endl;
//     cout<<"Successfull movements:"<<successfulMovements<<endl;
//     cout<<"Successfull Undo's: "<<successfullUndo<<endl;

//     cout<<"Cout final stack:"<<endl;
//     g.displayInfo();

// return 0;
// }

//QUES:09
#include<iostream>
using namespace std;
const int MAX_CAPACITY = 10000;   // max patients any single queue can hold
const int MAX_LOG = 10000;
class Patient{
public:
int patientID;
int severityLevel;
Patient(){
    patientID=0;
    severityLevel=0;
}
Patient(int id, int level){
    patientID=id;
    severityLevel=level;
}
};
class Game{
private:
Patient *arr;
int front;
int rear;
int capacity;
int count;
public:
Game(int cap){
    capacity=cap;
    arr=new Patient[capacity];
       rear=front=-1;
       count=0;
       capacity=cap;
}
~Game(){
    delete []arr;
}
bool isfull(){
    return count==capacity;
}
bool isempty(){
    return count==0;
}
void enque( const Patient &p1 ){
    if(isfull()){
        return;
    }
    rear= (rear+1)%capacity;
    arr[rear]=p1;
    count++;
}
Patient deque(){
    Patient p= arr[front];
    front= (front+1)%capacity;
    count--;
    return p;
}
int size(){return count;}
};
int main(){
    Game Critical (MAX_CAPACITY);
     Game Serious (MAX_CAPACITY);
      Game Normal (MAX_CAPACITY);
Patient p;
      int treatedIDs[MAX_CAPACITY];
      int treatedcount=0;
      string command;
     int n;

    // Number of operations
    cout << "Enter number of operations: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        string command;

        cout << "Enter command: ";
        cin >> command;
        
        if(command=="ARRIVE"){
            
            cin>> p.patientID >> p.severityLevel;
            if(p.severityLevel==1){
                Critical.enque(p);
            } else if(p.severityLevel==2){
                Serious.enque(p);
            }else if(p.severityLevel==3){
                Normal.enque(p);
            }
        }
        else if(command=="TREAT"){
             if(!Critical.isempty()){
               p= Critical.deque();
             }else if(!Serious.isempty()){
                p=Serious.deque();
             } else if(!Normal.isempty()){
                p=Normal.deque();
             } else {
                cout<<"No patient in waiting queue!"<<endl;
                continue;
             }
             treatedIDs[treatedcount]=p.patientID;
               treatedcount++;
               cout<<"Treated Patient :"<< p.patientID<<endl;
        }
    
}
cout << endl;
    cout << "--- Emergency Room Summary ---" << endl;

    cout << "Treatment order: ";

    for (int i = 0; i < treatedcount; i++) {
        cout << treatedIDs[i] << " ";
    }

    cout << endl;

    int remaining =
        Critical.size() +
        Serious.size() +
        Normal.size();

    cout << "Total patients treated: "
         << treatedcount << endl;

    cout << "Total patients remaining: "
         << remaining << endl;

    cout << "Critical waiting: "
         << Critical.size() << endl;

    cout << "Serious waiting: "
         << Serious.size() << endl;

    cout << "Normal waiting: "
         << Normal.size() << endl;
         return 0;
}