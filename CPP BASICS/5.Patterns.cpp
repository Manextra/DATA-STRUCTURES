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


      // 1
      // 2 3
      // 3 4 5
      // 4 5 6 7
      cout<<"Pattern 10"<<endl;
      int count3 = 1;
      for(int i=1; i <=n ; i++){
        int x = i;
        for(int j=1 ; j <=i ;j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
      }


      // 1
      // 2 1
      // 3 2 1
      // 4 3 2 1
      cout<<"Pattern 11"<<endl;
      for(int i=1;i<=n;i++){
        int x1 = i;
        for(int j=1; j <=i;j++){
          cout<<x1<<" ";
          x1--;
        }
        cout<<endl;
      }



      // A A A
      // B B B
      // C C C
      cout<<"Pattern 12"<<endl;
      for(int i=1;i <=n;i++){
        char a = 'A' + i -1;
        for(int j =1 ; j <= n ; j++){
          cout<<a<<" ";
        }
        cout<<endl;
      }


      // A B C
      // A B C
      // A B C
      cout<<"Pattern 13"<<endl;
      for(int i=1; i <=n ; i++){
        for(int j=1; j <=n ; j++){
          char b = 'A' + j -1;
          cout<<b<<" ";
        }
        cout<<endl;
      }


      // A B C
      // D E F
      // G H I
      cout<<"Pattern 14"<<endl;
      int count4 =1;
      for(int i=1; i <=n;i++){
        for(int j =1 ; j<=n;j++){
          char ch = 'A'+count4-1;
          cout<<ch<<" ";
          count4++;
        }
        cout<<endl;
      }


      // A B C
      // B C D
      // C D E
      cout<<"Pattern 15"<<endl;
      for(int i=1; i<=n;i++){
        int count5 = i;
        for(int j=1;j<=n;j++){
          char ch2 = 'A'+count5-1;
          cout<<ch2<<" "; 
          count5++;
        }
        cout<<endl;
      }



      // A 
      // B B
      // C C C
      cout<<"Pattern 16"<<endl;
      for(int i=1; i<=n ; i++){
        for(int j=1;j<=i;j++){
          char ch3 = 'A' +i -1; 
          cout<<ch3<<" ";
        }
        cout<<endl;
      }
       
      
      // A 
      // B C
      // D E F
      cout<<"Pattern 17"<<endl;
      int count6 = 1;
      for(int i=1; i<=n ; i++){
        for(int j=1;j<=i;j++){
          char ch4 = 'A'+count6-1;
          cout<<ch4<<" ";
          count6++;
        }
        cout<<endl;
      }


      // A 
      // B C
      // C D E
      cout<<"Pattern 18"<<endl;
      for(int i=1;i<=n;i++){
        int count7 = i;
        for(int j=1;j<=i;j++){
          char ch5 = 'A'+count7-1;
          cout<<ch5<<" ";
          count7++;
        }
        cout<<endl;
      }
      

      // D
      // C D
      // B C D
      // A B C D
      cout<<"Pattern 19"<<endl;
      int y;
      for(int i=1;i<=n;i++){
        y=i;
        for(int j=1;j<=i;j++){
          char ch6 = 'A'+n-y;
          cout<<ch6<<" ";
          y--;
        }
        cout<<endl;
      }


      //       *
      //     * *
      //   * * *
      // * * * *
      cout<<"Pattern 20"<<endl;
      for(int i=1;i <=n;i++){
        for(int j=1;j<=n-i;j++){
          cout<<"  ";
        }
        for(int j=n-i+1 ; j<=n ;j++){
          cout<<"* ";
        }
        cout<<endl;
      }


      // * * * *     
      // * * *    
      // * * 
      // * 
      cout<<"Pattern 21"<<endl;
      for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
          cout<<"* ";
        }
        cout<<endl;
      }

       
      // * * * *     
      //   * * *  
      //     * * 
      //       *
      cout<<"Pattern 22"<<endl;
      for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
          cout<<"  ";
        }
        for(int j=i;j<=n;j++){
          cout<<"* ";
        }
        cout<<endl;
      }


      // 1 1 1 1   
      //   2 2 2  
      //     3 3
      //       4
      cout<<"Pattern 23"<<endl;
      for(int i=1;i<=n;i++){
        for(int j=1; j<=i-1;j++){
          cout<<"  ";
        }
        for(int j=i;j<=n;j++){
          cout<<i<<" ";
        }
        cout<<endl;
      }


      //       1   
      //     2 2  
      //   3 3 3
      // 4 4 4 4
      cout<<"Pattern 24"<<endl;
      for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
          cout<<"  ";
        }
        for(int j=n-i+1;j<=n;j++){
          cout<<i<<" ";
        }
        cout<<endl;
      }


      //       1   
      //     2 3  
      //   4 5 6
      // 7 8 9 10
      int count12 = 1;
      cout<<"Pattern 25"<<endl;
      for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
          cout<<"  ";
        }
        for(int j=n-i+1; j <=n ;j++){
          cout<<count12<<" ";
          count12++;
        }
        cout<<endl;
      }
      


      //      1  
      //    1 2 1   
      //  1 2 3 2 1 
      cout<<"Pattern 26"<<endl;
      int count13 = 1;
      for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
          cout<<"  ";
        }
        for(int j=n-i+1;j<=n;j++){
          cout<<count13<<" ";
          count13++;
        }
        count13 =1;
       int  start = i-1;
        while(start){
          cout<<start<<" ";
          start--;
        }
        cout<<endl;
      }
  return 0;
}

