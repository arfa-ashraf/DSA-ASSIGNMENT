#include<iostream>
using namespace std;
#include <vector>

int partition(vector <int>& nums, int start, int end){
int index = start-1;
int pivot= nums[end];
for(int j= start; j<end; j++){
    if(nums[j]<=pivot){
    index++;
    swap(nums[j], nums[index]);
    }
}
index++;
swap(nums[end], nums[index]);
return index;
}
void QuickSort(vector <int>& arr, int start, int end){
    if(start<end){
        int pivotIndex= partition(arr, start, end);
         QuickSort(arr, start,pivotIndex-1);
         QuickSort(arr, pivotIndex +1, end);
    }
}
int main(){
    vector <int> arr={12, 4, 3, 6, 5};
   QuickSort(arr, 0, arr.size()-1);
   int x;
   for(int x: arr){
    cout<< x<< " ";
   }
   return 0;
}