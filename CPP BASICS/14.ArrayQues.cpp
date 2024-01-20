#include <iostream>
using namespace std;
void printArr(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  // swap alternate
  int arr[6] = {2,4,5,1,3,0};
  int size = 6;
  for(int i=0;i<5;i++){
    if((i+1) <size){
      swap(arr[i],arr[i+1]);
      i++;
    }
  }
  printArr(arr,size);
}