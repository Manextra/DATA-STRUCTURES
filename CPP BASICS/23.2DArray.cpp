#include<iostream>
using namespace std;


void isPresent(int arr[][2],int row,int col){
  int target;
  cout<<"Enter the element to search :";
  cin>>target;
  bool flag = 0;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(arr[i][j] == target){
            cout<<"Element found at "<<i<<"th row and "<<j<<"th column";
            flag = 1;
        }
    }
  }
  if(flag == 0){
  cout<<"Element not found";
  }
  cout<<endl;
}

void rowWiseSum(int arr[][2],int row,int col){
  int sum = 0;
     for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
           sum += arr[i][j];
         }
         cout<<"Sum for row "<<i <<" is :"<<sum<<endl;
         sum = 0;
     }
}

void largestRowSum(int arr[][2],int row,int col){
   int sum = 0;
   int maxSum = 0;
     for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
           sum += arr[i][j];
         }
         cout<<"Sum for row "<<i <<" is :"<<sum<<endl;
         if(sum > maxSum)
         maxSum = sum;
         sum = 0;
     }
     cout<<"Max sum is : "<< maxSum <<endl;
}

int main(){
  int arr[3][4];
  int arr1[10][2] = {{11,22},{44,65},{26,76},{26,27},{62,78},{66,97},{63,74},{61,77},{161,701},{16,17}};
  // cout<<"Enter elements for the array :";
  // for(int i=0;i<3;i++){
  //   for(int j=0;j<4;j++){
  //      cin>>arr[i][j];
  //   }
  // }
  // cout<<"Array :"<<endl;
  // for(int i=0;i<3;i++){
  //   for(int j=0;j<4;j++){
  //      cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }
  cout<<"Hardcored arr :"<<endl;
  for(int i=0;i<10;i++){
    for(int j=0;j<2;j++){
      cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
  }
  //to search an element
  isPresent(arr1,10,2);
  rowWiseSum(arr1,10,2);
  largestRowSum(arr1,10,2);
}