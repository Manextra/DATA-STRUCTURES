#include <iostream>
using namespace std;
int main(){
  // basic program
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;
  switch(n){
    case 1:{
      cout<<"In case 1"<<" ";
      break;
    }
    case 2:{
      cout<<"In case 2"<<" ";
      break;
    }
    case 3:{
      cout<<"In case 3"<<" ";
      break;
    }
    case 4:{
      cout<<"In case 4"<<" ";
      break;
    }
    case 5:{
      cout<<"In case 5"<<" ";
      break;
    }
    default:{
      cout<<"Default case"<<" ";
    }
  }



  cout<<endl;
  //calculator
  int a=3;
  int b=4;
  char ch;
  cout<<"enter d for + ";
  cout<<endl;
  cout<<"enter e for - ";
  cout<<endl;
  cout<<"enter f for * ";
  cout<<endl;
  cout<<"enter g for % ";
  cout<<endl;
  cin>>ch;
  switch(ch){
     case 'd':{
          cout<<a+b<<" ";
          break;
     }
     case 'e':{
          cout<<a-b<<" ";
          break;
     }
     case 'f':{
          cout<<a*b<<" ";
          break;
     }
     case 'g':{
          cout<<a%b<<" ";
          break;
     }
     default:{
      cout<<"Enter a valid operation..";
     }
  }



  // Notes and Amount
  int amount;
  int n100= 0,n50 = 0,n20 = 0,n10 = 0;

  cout<<"Enter the amount u want to split: ";
  cin>>amount;
  switch(amount >= 100){
    case 1:
      n100 = amount/100;
      amount = amount -n100*100;
  }
   switch(amount >= 50){
    case 1:
      n50 = amount/50;
      amount = amount -n50*50;
  }
   switch(amount >= 20){
    case 1:
      n20 = amount/20;
      amount = amount -n20*20;
    
  }
   switch(amount >= 10){
    case 1:
      n10 = amount/10;
      amount = amount -n10*10;
      break;
  }
  cout<<"100 rupee notes needed: "<<n100<<endl;
  cout<<"50 rupee notes needed: "<<n50<<endl;
  cout<<"20 rupee notes needed: "<<n20<<endl;
  cout<<"100 rupee notes needed: "<<n10<<endl;
}
//  exit() terminates the entire program and returns control to the operating system, while break only terminates the current loop or switch statement and transfers control to the next statement.