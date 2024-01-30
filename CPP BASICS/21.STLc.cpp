#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
  // stack ---> LIFO
  stack<string>s;
  s.push("oho");
  s.push("singh");
  s.push("goyal");
  cout<<"top element: "<<s.top()<<endl;
  s.pop();
  cout<<"top element after pop: "<<s.top()<<endl;
  cout<<"Size of stack :"<<s.size()<<endl;
  cout<<"Empty or not? "<<s.empty()<<endl;

  // queue ---> FIFO
  queue<string>q;
  q.push("oho");
  q.push("singh");
  q.push("goyal");
  cout<<"first element: "<<q.front()<<endl;
  q.pop();
  cout<<"first element after pop: "<<q.front()<<endl;
  cout<<"Size :"<<q.size()<<endl;
}