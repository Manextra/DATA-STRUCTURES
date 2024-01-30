#include<iostream>
#include<queue>
#include<set>
using namespace std;
int main(){
  // priority queue
  priority_queue<int>maxi;  //max heap
  priority_queue<int,vector<int>,greater<int> >mini; //min heap
  maxi.push(31);
  maxi.push(1);
  maxi.push(2);
  maxi.push(20);
  cout<<"size :"<<maxi.size()<<" "<<endl;
  int n = maxi.size();
  for(int i=0;i<n;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
  }
  cout<<endl;
  mini.push(31);
  mini.push(1);
  mini.push(2);
  mini.push(20);
   cout<<"size :"<<mini.size()<<" "<<endl;
  int m = mini.size();
  for(int i=0;i<m;i++){
    cout<<mini.top()<<" ";
    mini.pop();
  }
  cout<<endl;
  cout<<"Empty or not : "<<mini.empty()<<endl;
  

  // set
  set<int> s;
  s.insert(5);
  s.insert(2);
  s.insert(2);
  s.insert(2);
  s.insert(56);
  s.insert(56);
  s.insert(56);
  s.insert(56);
  s.insert(3);
  for(auto i:s){
    cout<<i<<endl;
  }
  cout<<endl;
  s.erase(s.begin());
  for(auto i:s){
    cout<<i<<endl;
  }
  cout<<"Is present or not? "<<s.count(56)<<endl;
}