#include<iostream>
#include<deque>
#include<list>
using namespace std;
int main(){
   // DEQUE
   deque<int> d;
   d.push_back(1);
   d.push_front(2);
   cout<<"before pop : ";
   for(int i:d){
    cout<<i<<" ";
   }
   cout<<endl;
   d.pop_back();
   cout<<"after pop : ";
   for(int i:d){
    cout<<i<<endl;
   }
   d.push_back(9);
   d.push_front(12);
    cout<<"First index element : "<<d.at(1)<<endl;
    cout<<"Front element : "<<d.front()<<endl;
    cout<<"Back element : "<<d.back()<<endl;
    cout<<"is Empty :"<<d.empty()<<endl;
    cout<<"Before erase :"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase :"<<d.size()<<endl;
   //  List
    list<int> l;
    l.push_back(19);
    l.push_front(1);
    l.push_front(12);
    cout<<"List is :";
    for(int i:l){
     cout<<i<<" ";
    }
    l.erase(l.begin());
    cout<<"After erase :";
    for(int i:l){
     cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list : "<<l.size()<<endl;

   return 0;
}