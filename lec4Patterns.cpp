// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter number of lines:"<<endl;
//     cin>>n;
//     cout<< endl;
//  char ch='A';
//     for(int i=0;i<n;i++){  

//         for(int k=0;k<i;k++){
//             cout<<" ";
//         }  // outer loop always tell number of lines in a pattern
//      for(int j= n-i;j>0;j--){  
//               // inner loop tells rows
              
//             cout<< ch ;

//     }
//         ch++;
//         cout<<endl;
//     }

//     return 0;
// }



// pyramid pattern will divide in 2 triangles
// #include<iostream>
// using namespace std;

// int main(){
//     int n=4;

//     for(int i=0;i<n;i++){
//         int num=1;
//     for(int k=0;k<n-i-1;k++){
//         cout<< " ";
//     }
//     for(int j=0; j<i+1; j++){
//        cout<< num <<" ";
//       num++;
//     }
//     for(int a= i; a>=1;a--){
//         cout<< a <<" ";
//     }
//     cout<< endl;
//     }
//     return 0;
// }
// pyramid problem for alphabets
// #include<iostream>
// using namespace std;

// int main(){
//     int n=4;

//     for(int i=0;i<n;i++){
//         char ch='A';
//     for(int k=0;k<n-i-1;k++){
//         cout<< " ";
//     }
//     for(int j=0; j<i+1; j++){
//        cout<< ch <<" ";
//       ch++;
//     }
//     ch-=2;
//     for(int a= i; a>=1;a--){
//         cout<< ch <<" ";
//         ch--;
//     }
//         cout<< endl;
// }
//     return 0;
// }
// Hollow pattern 
// #include<iostream>
// using namespace  std;
// int main(){
// int n=4;

// for(int i=0;i<n;i++){
// for(int j=0;j<n-i-1;j++){
//     cout<<" ";
// }
// cout<< "*";

// if(i!=0){
//     for(int k=0;k< 2*i-1;k++){
//         cout<< " ";
//     }
//     cout<<"*";
// }
// cout<< endl;

// }
// for(int a=0;a<n-1;a++){
//     for(int b=0; b<a+1;b++){
//         cout<< " ";
//     }
//     cout<< "*";

//     if(a!=n-2){
//     for(int p=0; p<2*(n-a)-5;p++){
//         cout <<" ";
//     }
//     cout<<"*";
// }
// cout<<endl;
// }

//     return 0;
// } 
// Butterfly pattern
#include<iostream>
using namespace std;

int main(){
int n=4;
for(int i=0;i<n;i++){
for(int j=0;j<i+1;j++){
    cout<< "*";
}
for(int k=0; k<n-i-1;k++){
    cout<< " ";
}
for(int k=0; k<n-i-1;k++){
    cout<< " ";
}
for(int j=0;j<i+1;j++){
    cout<< "*";
}
cout<<endl;
}
for(int i=0; i<n;i++){
    for(int j=n-i-1; j>=0;j--){
        cout<<"*";
    }
    if(i!=0){
        for(int k=0; k<i; k++){
            cout<<" ";
        }
    }

    if(i!=0){
        for(int k=0; k<i; k++){
            cout<<" ";
        }
    }
    for(int p=n-i-1; p>=0; p--){
        cout<< "*";
    }
    cout<<endl;
}
    return 0;
}