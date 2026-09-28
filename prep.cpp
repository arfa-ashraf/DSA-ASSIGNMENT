#include <iostream>
#include<cstring>
using namespace std;

class Text{
public:
char *arr;
int size;
Text(){
    size=0;
    arr=nullptr;
}
Text(const char *str){
    size= strlen(str)+1;
    arr= new char[size];
    strcpy(arr, str);
}
Text(const Text &other){
    size= other.size;
    arr= new char[size];

    strcpy(arr, other.arr);

}
Text &operator=(const Text & other);
};
Text &Text::operator=(const Text & other){
    if(this != &other){
        delete[]arr;
        size= other.size;
        arr= new char [size];
        
        strcpy(arr, other.arr);
    }
    return *this;
}
int main(){
    Text T1("Hello World");
    Text T2= T1;
    cout<<T1.arr<<endl;
     cout<<T2.arr<<endl;
    return 0;
}