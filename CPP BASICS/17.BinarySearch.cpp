#include <iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key){
   int start = 0;
   int end = size - 1;
   int mid;
   while(start<=end){
      mid = (start+end)/2;
      if(arr[mid] == key){
        return mid;
      }
      else if(arr[mid] > key){
        end = mid-1;
      }
      else if(arr[mid] < key){
        start = mid+1;
      }
   }
   return -1;
}
int main(){
  int arr[5] = {2,3,4,8,9};
  cout<<"Element is present at  "<<BinarySearch(arr,5,8)<<" index";
}