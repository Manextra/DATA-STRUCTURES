#include<iostream>
using namespace std;
void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void maxmin(int arr[],int size){
  int max = arr[0];
  int min = arr[0];
   for(int i=1;i<size;i++){
      if(arr[i] > max){
        max = arr[i]; 
      }
      if(arr[i]<min){
        min = arr[i];
      }
   }
   cout<<"Max element is : "<<max<<endl;
   cout<<"Min element is : "<<min<<endl;
}
void sumOfelement(int arr[],int size){
  int sum = 0;
  for(int i=0;i<size;i++){
    sum += arr[i];
  }
  cout<<"Sum is : "<<sum<<" ";
}
void linearSearch(int arr[],int size){
  int key;
  cout<<"Enter key : ";
  cin>>key;
  for(int i=0;i<size;i++){
    if(arr[i] == key){
      cout<<"Element found..";
      return;
    }
  }
  cout<<"Element not found..";
}
void revarr(int arr[],int size){
  int temp;
   for(int i=0;i<size/2;i++){
      temp = arr[i];
      arr[i] = arr[size -i -1];
      arr[size -i-1] = temp;
   }
   cout<<"Reversed array is :";
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}



int main(){
  int num[15] = {2,7};
  cout<<"ok"<<endl<<endl;
  printArray(num,15);
  int array[3]={5,7,11};
  cout<<array[2]<<endl;
  int arr1[15] = {0};
  cout<<"Printing arr1 :";
  printArray(arr1,15);
  cout<<"Printing arr2 :";
  int arr2[5] ={1};
  printArray(arr2,5);
  int size = sizeof(arr2)/sizeof(int);
  cout<<size<<endl;
  char ch[5] = {'a','r','m','p','d'};
  cout<<ch[4]<<endl;

  // maximum and minimum element in an array
  int size1;
  cout<<"enter size of the array :";
  cin>>size1;
  int arr3[100];
  for(int i=0;i<size1;i++){
    cout<<"Enter element of array : ";
    cin>>arr3[i];
  }
  // maxmin(arr3,size1);
  // // sum of elements in the array
  // sumOfelement(arr3,size1);
  // // linear search
  // linearSearch(arr3,size1);
  revarr(arr3,size1);
}