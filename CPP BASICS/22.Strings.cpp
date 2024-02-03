#include<iostream>
using namespace std;
int main(){
char name[20];
cout<<"Enter your name: ";
cin>>name;
// name[2] = '\0';
cout<<"your name is "<<name<<endl;


// Length of string
int length = 0;
int i=0;
while(name[i] != '\0'){
  i++;
  length++;
}
cout<<"length of string is "<<length<<" ";
return 0;
}
