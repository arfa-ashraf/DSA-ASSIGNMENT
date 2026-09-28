#include<iostream>
#include<vector>
using namespace std;

// void merge(vector<int> &arr, int start, int mid, int end){
//      vector<int>temp;
//      int i= start;
//      int j= mid+1;
//      while(i<=mid && j<=end){
//  if(arr[i]<arr[j]){
//     temp.push_back(arr[i]);
//     i++;
//  }else{
//      temp.push_back(arr[j]);
//     j++;
//  }
//      }
//      while(i<=mid){
//     temp.push_back(arr[i]);
//     i++;
//      }
//      while(j<=end){
//          temp.push_back(arr[j]);
//     j++;
//      }

//      // copy temp array in original array
//      for(int i=0; i<temp.size(); i++){
//          arr[i+start]= temp[i];
//      }
// }
// void mergeSort(vector<int>& nums, int start, int end){
//     if(start< end){
//  int mid= start + (end- start)/2;
    
//     mergeSort(nums, start, mid);
//     mergeSort(nums, mid+1, end);
//     merge (nums, start, mid, end);
//     }
// }
// int main(){
//     vector <int> arr={12,34, 6, 23};
//     int start= 0;
//     int end= arr.size()-1;
//     mergeSort(arr, start, end);
//     for(int x: arr){
//         cout<<x<<" ";
//     }
//     return 0;
// }

//inversion Count Problem 
int merge(vector<int> &arr, int start, int mid, int end){
     vector<int>temp;
     int i= start;
     int j= mid+1;
     int inversionCount=0;
     while(i<=mid && j<=end){
 if(arr[i]<arr[j]){
    temp.push_back(arr[i]);
    i++;
 }else{
     temp.push_back(arr[j]);
     inversionCount+=(mid-i+1);
    j++;
 }
     }
     while(i<=mid){
    temp.push_back(arr[i]);
    i++;
     }
     while(j<=end){
         temp.push_back(arr[j]);
    j++;
     }

     // copy temp array in original array
     for(int i=0; i<temp.size(); i++){
         arr[i+start]= temp[i];
     }
     return inversionCount;
}
int mergeSort(vector<int>& nums, int start, int end){
    if(start< end){
 int mid= start + (end- start)/2;
    
   int leftInverCount= mergeSort(nums, start, mid);
    int rightInverCount=  mergeSort(nums, mid+1, end);
   int inversionCount= merge (nums, start, mid, end);
   return leftInverCount + rightInverCount + inversionCount;
    }
    return 0;
}
int main(){
    vector <int> num1= {6,3,5,2,7};
    vector <int>nums2={1,3,5,10,2,6,8,9};
    
  int ans=  mergeSort(num1, 0, num1.size()-1);
  cout<< "inversion count=" <<ans<<endl;
  return 0;
}