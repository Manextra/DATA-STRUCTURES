#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<n<<endl; //garbage value
    cout<<"Enter value for n:";
    cin>>n; //cin tab,space aur enter ko ignore krta hai agr inn whitespaces ko read krana hai toh cin.get use kr skte hai
    if(n < 0){
    cout<<"Value for n is negative"<<endl;
    }
    else{
        if(n > 0){
        cout<<"Value for n is positive"<<endl;
        }
        else{
            cout<<"Value for n is 0"<<endl;
        }
    }


    //Nested if-else
    int a;
    cout<<"Enter the value of a:";
    cin>>a;
    if(a>0){
        cout<<"+ive"<<endl;
    }
    else if(a==0){
        cout<<"zero"<<endl;
    }
    else{
        cout<<"-ive"<<endl;
    }
    return 0; 
}