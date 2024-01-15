#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int k = 0;
   int i = 0;
   int ans = 0;
   while(n != 0){
     k = n%10;
     ans = ans + (k*pow(2,i));
     n = n/10;
     i++;
   }
   cout<<ans<<" "<<endl;
}