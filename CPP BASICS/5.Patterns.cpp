#include<iostream>
using namespace std;
int main(){
    //  * * * 
    //  * * * 
    //  * * * 
int n;
cout<<"Enter the value for n:";
cin>>n;
cout<<"Pattern 1"<<endl;
for(int i = 0 ; i < n ; i++){
  for(int j = 0 ; j < n ; j++){
    cout<<"* ";
  }
  cout<<endl;
  }
  
     //  1 1 1 
     //  2 2 2 
     //  3 3 3 
  cout<<"Pattern 2"<<endl;
  for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j <= n ; j++){
      cout<<i<<" ";
    }
    cout<<endl;
  }
   

      //1 2 3 4
      //1 2 3 4
      //1 2 3 4
      //1 2 3 4
      cout<<"Pattern 3"<<endl;
      for(int i = 1 ; i <= n ;i++){
        for(int j = 1 ; j <= n ; j++){
          cout<<j<<" ";
        }
        cout<<endl;
      }


      // 3 2 1
      // 3 2 1
      // 3 2 1
      cout<<"Pattern 4"<<endl;
      for(int i = 1 ; i <=n ; i++){
         for(int j = n ; j >0 ; j--){
          cout<<j<<" ";
         }
         cout<<endl;
      }


      // 1 2 3
      // 4 5 6
      // 7 8 9
      cout<<"Pattern 5"<<endl;
      int count = 1;
      for(int i = 1; i <=n ; i++){
        for(int j = 1 ; j <=n ;j++){
          cout<<count<<" ";
          count++;
        }
        cout<<endl;
      }


      // 9 8 7
      // 6 5 4
      // 3 2 1
      cout<<"Pattern 6"<<endl;
      int count1 = n*n;
      for(int i = 1 ; i <= n ; i++){
        for(int j = 1; j <= n ; j++){
          cout<<count1<<" ";
          count1--;
        }
        cout<<endl;
      }


      // *
      // * *
      // * * *
      // * * * *
      cout<<"Pattern 7"<<endl;
      for(int i = 1 ; i <= n ; i++){
        for(int j = 1; j <= i ; j++){
          cout<<"* ";
        }
        cout<<endl;
      }


      // 1
      // 2 2 
      // 3 3 3 
      // 4 4 4 4
      cout<<"Pattern 8"<<endl;
      for(int i = 1 ; i <=n ; i++){
        for(int j = 1 ; j <=i ; j++){
          cout<<i<<" ";
        }
        cout<<endl;
      }


      // 1
      // 2 3
      // 4 5 6
      // 7 8 9 10
      cout<<"Pattern 9"<<endl;
      int count2= 1;
      for(int i = 1 ; i <=n ;i++){
        for(int j = 1 ; j <= i ; j++){
          cout<<count2<<" ";
          count2++;
        }
        cout<<endl;
      }

  return 0;
}
