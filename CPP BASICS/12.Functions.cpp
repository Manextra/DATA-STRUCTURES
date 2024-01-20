#include <iostream>
using namespace std;
int power(){
  int x,y;
  cout<<"Enter base value: ";
  cin>>x;
  cout<<"Enter power value: ";
  cin>>y;
  int ans = 1;
  for(int i=1; i<=y;i++){
    ans = ans*x;
  }
  return ans;
}
void eveodd(){
  int num;
  cout<<"Enter number to check for even or odd :";
  cin>>num;
  if(num%2 == 0){
    cout<<"Even number"<<endl;
  }
  else{
    cout<<"odd number"<<endl;
  }
}
int factorial(int n){
  int ans = 1;
   for(int i=1;i<=n;i++){
     ans = ans*i;
   }
   return ans;
}
int nCr(){
    int n,r,value;
    cout<<"Enter the values for n & r: ";
    cin>>n>>r;
    // if(r == 0){
    //   return 1;
    // }
   value = factorial(n)/(factorial(r)*factorial(n-r));
   return value;
}
void printCount(){
  int num;
  cout<<"Enter the value till u want to print: ";
  cin>>num;
  for(int i=1;i<=num;i++){
    cout<<i<<" , ";
  }
}
void isPrime(){
   int num;
   cout<<"Enter number u want to check prime or not: ";
   cin>>num;
   for(int i=2;i<num;i++){
    if(num%i == 0){
      cout<<"Not Prime"<<endl;
      break;
    }
    cout<<"Prime"<<endl;
   }
}
//3*n + 7
void AP(){
  int num;
  cout<<"Value for finding AP's nth term :";
  cin>>num;
  int apTerm = (3*num) + 7;
  cout<<apTerm<<" ";
}

void countSetbits(){
  int n;
  cout<<"Enter 2 nos for counting their bits : ";
  cin>>n;
  int m;
  cin>>m;
  int count = 0;
   while(n!=0 && m!=0){
     if(n&1){
      count++;
     }
     if(m&1){
      count++;
     }
     n >>= 1;
     m >>= 1;
   }
   cout<<count<<" ";
}
void fibonacci(){
  int a=0,b=1,c;
  int n;
  cout<<"Enter nth fib u want :";
  cin>>n;
  int ans = 1;
  if(n == 0){
    cout<< a;
  }
  for(int i=2;i<=n;i++){
     c = a + b;
     a = b;
     b = c;
  }
  cout<<b<<"  ";
}

int main(){
  // a power b
cout<<power()<<endl;
cout<<power()<<endl;
  // check even odd
eveodd();
   // nCr function
cout<<nCr()<<endl;
   // counting print
printCount();
   // check prime or not
isPrime();
  // AP return 
AP();
  // setBits count
countSetbits();
  // nth fib term
fibonacci();
return 0;
}