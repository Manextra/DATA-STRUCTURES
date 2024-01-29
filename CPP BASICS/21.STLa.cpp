#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main(){
  // ARRAY
  int arr[3] = {1,2,3}; //normally declaring
  array<int,4> a = {1,2,3,4};
  int size = a.size();
  for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  cout<<"2nd index element :"<<a.at(2)<<" ";
  cout<<endl;
  cout<<"Empty or not :"<<a.empty()<<" "<<endl;
  cout<<"First element :"<<a.front()<<endl;
  cout<<"Last element :"<<a.back()<<endl;

  // VECTOR
  vector<int> v;
  cout<<"Capacity of vector : "<<v.capacity()<<endl;
  v.push_back(1);
  cout<<"Capacity of vector : "<<v.capacity()<<endl;
  v.push_back(2);
  cout<<"Capacity of vector : "<<v.capacity()<<endl;
  v.push_back(3);
  cout<<"Capacity of vector is : "<<v.capacity()<<endl;
  cout<<"Size of vector is : "<<v.size()<<endl;
  cout<<"2nd index element :"<<v.at(2)<<" "<<endl;
  cout<<"First element :"<<v.front()<<endl;
  cout<<"Last element :"<<v.back()<<endl;
  cout<<"Before pop -> ";
  for(int i:v){
    cout<<i<<" ";
  }cout<<endl;
  v.pop_back();
  cout<<"After pop -> ";
  for(int i:v){
    cout<<i<<" ";
  }cout<<endl;
  cout<<"before clear size :"<<v.size()<<endl;
  v.clear();
  cout<<"after clear size :"<<v.size()<<endl;
}