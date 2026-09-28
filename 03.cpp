#include<iostream>
#include<vector>
using namespace std;
// Maximum Subarray Sum
int maxSum= INT_MIN;
void MaximumSum(int arr[], int size){
for(int i=0; i<size; i++){
    int currentSum= 0;
    for(int j=i; j<size; j++){
      currentSum+= arr[j];
      maxSum= max(currentSum,maxSum);
    }
}
cout<<"Max subarray sum:"<<maxSum<<endl;
}

int linearSearch(vector <int> nums, int target){
    for(int j=0;j<nums.size();j++){
        int answer;
        if(nums[j]== target){
       answer=nums[j];
           cout<<"Value found:"<<answer<<endl;
        }
    }  return-1;
}

int findMajorityElement(int arr[], int size){
    int frequency=0, ans=0;
    for(int i=0;i<size;i++){
        if(frequency==0){
            ans= arr[i];
        }
        if(ans==arr[i]){
            frequency++;
        }else{
            frequency--;
        }
    }  
    int count=0;
    for(int i=0;i<size;i++){
        
        if(arr[i]== ans){
            count++;
        }
    }  
    if(count > size/2){
        return ans;

    }
    return -1;
}
int main(){
    vector <int> vec1={12,45,23,35};
    for(int value: vec1){
        cout<< value<<endl;
    }
linearSearch(vec1, 35);

int arr[]={12,-8,3,5,-12};
MaximumSum(arr, 5);

int arrM[]={1,1,2,3,4,2,1,1,1};
int result = findMajorityElement(arrM, 9);
if(result!=-1){
    cout<<"Maximum element in an array is:"<<result<<endl;
}else{
    cout<<"No max element found!"<<endl;
}
    return 0;
}   