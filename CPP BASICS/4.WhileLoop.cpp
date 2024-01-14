#include<iostream>
using namespace std;
int main(){
  //print from 1 to 5
  int a = 1;
  while(a <= 5){
    cout<<a<<",";
    a++;
  }
  cout<<endl;

  // print 1 to n
  int n;
  cout<<"Enter the value of n:";
  cin>>n;
  int i = 1;
  while(i <= n){
    cout<<i<<",";
    i++;
  }
  cout<<endl;

// sum from 1 to n
int m;
cout<<"Enter the value of m:";
cin>>m;
int sum = 0;
int j = 1;
while(j <= m){
  sum = sum + j;
  j++;
}
cout<<sum<<endl;



//sum of all even nos from 1 to n
int o;
cout<<"Enter the value for o:";
cin>>o;
int sumeve = 0;
int k = 2;
while(k<= o){
  sumeve = sumeve + k;
  k = k + 2;
}
cout<<sumeve<<endl;


// prime or not
int l;
cout<<"Enter the value for number u want to check if prime or not:";
cin>>l;
int p = 2;
while(p < l){
  if(l%p == 0){
    cout<<"Not a prime num"<<endl;
    break;
  }
  else{
  p++;
  }
}
cout<<"prime num it is a"<<endl;
}