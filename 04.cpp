#include<iostream>
using namespace std;
// int main(){
    
//     int a=10;
//     int *ptr= &a;
//     int **ptr2= &ptr;
//     cout<< ptr2<<endl;//  prints address of ptr
//     cout<<&ptr2<<endl;   // prints address of ptr2
//     cout<<**ptr2<<endl; // prints a=10
//     cout<<*ptr<<endl;   // prints a=10
//     cout<<ptr<<endl;     // prints address of a
//     cout<<&a<<endl;      // prints address of a 
//     cout<<&ptr<<endl;      // prints address of ptr
//     cout<< *(&a)<<endl;     // prints a=10
//     cout<<*ptr2<<endl;      // prints address of ptr
//     return 0;
// }
// array pointers
int main(){
    int arr[]={1,2,4,5,};
    cout<< arr<<endl; // prints addres sof 0th index
    cout<<*arr<<endl;// prints 1
    cout<< *(arr+1)<<endl; // prints 2 
      cout<< (arr+1)<<endl; // prints addres of index 1
   int a=10;
   int *p= &a;
   cout<<p<<endl;
   p++;
   cout<<p<<endl;
   cout<<&a <<endl;
    return 0;
}