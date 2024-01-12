#include<iostream>
using namespace std;
int main(){
  // variables and datatypes
  int a = 123;
  cout<<a<<endl;

  char b = 'v';
  cout<< b<<endl;

  bool output = false;
  cout<<output<<endl;

  float f = 1.23;
  cout<<f<<endl;
  
  double d = 2.23;
  cout<<d<<endl;


  // sizeof operator
  int size = sizeof(d);
  cout<<"Size of d is "<<size<<endl;


  // typecasting
  int e = 'e';
  cout<<e<<endl;

  char ch = 97;
  cout<<ch<<endl;
  
  char ch1 = 123456;
  cout<<ch1<<endl;

  unsigned int ua = -12; //big output if we give a negative no. cause most significant bit = 1
  cout<<ua<<endl;


  // operators
  cout<<2/3<<endl;
  cout<<2.9/3<<endl;
  cout<<2/3.2<<endl;

  // relational operators
  int j = 2;
  int k = 4;
  bool first = (j==k);
  bool second = (j>k);
  bool third = (j<k);
  bool fourth = (j>=k);
  bool fifth = (j<=k);
  bool sixth = (j!=k);
  cout<<first<<endl;
  cout<<second<<endl;
  cout<<third<<endl;
  cout<<fourth<<endl;
  cout<<fifth<<endl;
  cout<<sixth<<endl;


  // logical operator
  int l = 4;
  int m = 0;
  if(l&&m){
    cout<<"and operator";
  }
  if(l || m){
    cout<<"or operator"<<endl;
  }
  if( l != m){
    cout<<"not operator";
  }
}