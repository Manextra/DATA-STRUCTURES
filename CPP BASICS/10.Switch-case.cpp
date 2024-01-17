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
  
}
//  exit() terminates the entire program and returns control to the operating system, while break only terminates the current loop or switch statement and transfers control to the next statement.