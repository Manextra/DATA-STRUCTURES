#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  // map

   map<int,string> n;
   n[1] = "oho";
   n[2] = "kumar";
   n[15] = "Auto car";
   for(auto i:n){
    cout<<i.first<<endl;
   }
  //  n.insert( {5,"Thor"} ); --> error why?
   for(auto i:n){
    cout<<i.first<<" "<<i.second<<endl;
   }
   cout<<"Finding 15 : "<<n.count(15)<<endl;
   //algorithms
   vector<int> v;
   v.push_back(12);
   v.push_back(19);
   v.push_back(6);
   v.push_back(15);

   cout<<"Finding 6: " <<binary_search(v.begin(),v.end(),6);
   cout<<endl;
   string abcd = "abcd";
   reverse(abcd.begin(),abcd.end());
   cout<<abcd<<endl;
}