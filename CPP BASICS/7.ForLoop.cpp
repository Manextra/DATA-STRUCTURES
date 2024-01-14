#include<iostream>
using namespace std;



//print count from 1 to n
int main(){
  int n;
  cout<<"Enter the value for n: ";
  cin>>n;
for(int i=1;i<=n;i++){
  cout<<i<<" ";
}
cout<<endl;



//print sum from 1 to n
int sum = 0;
for(int i=1;i<=n;i++){
  sum = sum +i;
}
cout<<sum<<endl;



//print fibonacci series
// 0 1 1 2 3 5 8 13 21 .....
int a = 0;
int b = 1;
cout<<a <<" "<<b<<" ";
for(int i=0;i<=n;i++){
  int nextnum = a + b;
  cout<<nextnum<<" ";
  a = b;
  b = nextnum;
}

cout<<endl;
//print if prime
int isPrime = 0;
for(int i=2;i<n;i++){
   if(n%i == 0){
    isPrime=1;
    break;
   }
   else{
    continue;
   }
}
if(isPrime == 0){
   cout<<"prime number it is a"<<" ";
}
else{
   cout<<"not prime number it is a"<<" ";
}
}