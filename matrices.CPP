#include<iostream>
#include<utility>
#include<vector>
using namespace std;
// func to find element from matrix
pair<int,int> linearSearch(int matrix[][3], int rows, int cols, int key){
  for(int i=0; i<rows; i++){
    for(int j=0;j<cols; j++){
        if(matrix[i][j]==key){
            return make_pair(i,j);
        }
    }
  }
  return make_pair(-1, -1);
}
// maximum row sum
int getmaxsum(int matrix[][3],int rows, int cols){
    int Maxrowsum=INT_MIN;
    for(int i=0; i<rows; i++){
        int rowsSum=0;
        for(int j=0; j<cols; j++){
            rowsSum+= matrix[i][j];
        }
        Maxrowsum= max(Maxrowsum, rowsSum);
    }return Maxrowsum;
}
// maximum column sum
int getmaxsumCols(int matrix[][3],int rows, int cols){
    int MaxColumnSum=INT_MIN;
    for(int j=0; j<cols; j++){
        int colsSum=0;
        for(int i=0; i<rows; i++){
            
            colsSum+= matrix[i][j];
        }
        MaxColumnSum= max(MaxColumnSum,colsSum);
    }return MaxColumnSum;
}
// func to calculate diagonal sum
int calculateDiagonalSum(int matrix[][3], int n){    // TC=O(n^2)
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        if(i==j){
            sum+= matrix[i][j];
        }else if(j== n-1-i){
           sum+= matrix[i][j];
        }
        }
    }
    return sum;
}
// optimized version of diagonal sum 
int calculateDiagonalSumOP(int matrix[][3], int n){      // TC=O(n)
    int sum=0;
    for(int i=0; i<n; i++){
       sum+= matrix[i][i];
       if(i!=n-i-1){
        sum+=matrix[i][n-i-1];
       }
    }
    return sum;
}
int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=3;
    int cols=3;
   linearSearch(matrix,rows, cols,3);
     cout<<endl;
     cout<< getmaxsum(matrix,rows, cols)<<endl;
     cout<< getmaxsumCols(matrix,rows, cols);
     cout<<endl;
     int answer= calculateDiagonalSum(matrix, 3);
     cout<< answer;
     cout<<endl;
     // 2D vectors 
     vector<vector<int>> mat= {{1,2,3}, {4,5,6},{7,8,9,10,11,12}}; // can be easily resized at runtime
     for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[i].size(); j++){
            cout<< mat[i][j] <<" ";
            
        }
        cout<< endl;
     }
    return 0;

}