#include<iostream>
using namespace std;

void findmax(int arr[], int size){
    int max=INT_MIN;
    int index=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max= arr[i];
            index= i;
        }
       
}
 cout<<"Largest value is stored at :"<< index<< endl;
    }
void findmin(int arr[], int size){
    int smallest=INT_MAX;
    int index;
    for(int i=0;i<size;i++){
        smallest= min(arr[i],smallest);
        index= i;
        
}
cout<<"smallest value is stored at :"<< index<< endl;
    }

    void reverseArr(int arr[], int size){
   int start=0;
   int  end= size-1;
   int temp;
    while (start<end)
    {
        temp= arr[start];
        arr[start]= arr[end];
        arr[end]=temp;
        start++;
        end--;
        
        }
        
    }
    void displayReversedArr(int arr[], int size){
            cout<<"Reversed array:"<<endl;
            for(int i=0;i<size;i++){
                cout<< arr[i]<<" ";
            }
    }

int findUniqueElements(int arr[], int size){
    int i=0;
        for(int j=1;j<size-1;j++){
            if(arr[j]!=arr[i]){
             i++;
             arr[i]= arr[j];
            }
        } return i+1;
    }

void mergeArray(int arr[], int size){
 
}
int findNumbers(int arr[], int size, int target){
    int left =0;
    int right= size-1;
    while(left<right){
     int sum= arr[left]+arr[right];
     if(sum==target){
        cout<< left<<" "<<right<<endl;
     }
     if(sum>target){
       left++;
       right--;
     }
    }
}
int main(){
int size=5;
int score[size];

for(int i=0;i<size;i++){
    cin>> score[i];
    
}
findmax(score, size);
findmin(score, size);
reverseArr(score, size);
displayReversedArr(score, size);
 return 0;
}

   
