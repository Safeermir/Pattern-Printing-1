#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    
    for(int j=1;j<=n;j++){
        char a=65;
        for(int i=1;i<=n-j;i++){
            cout<<"  ";
        }
    for(int i=1;i<=j;i++){
       cout<<a<<" ";
       a++;
      
    }

    cout<<endl;
    }
}