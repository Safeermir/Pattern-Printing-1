#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int j=1;j<=n;j++){
        for(int k=1;k<=n-j;k++){
            cout<<" ";
        }
          for(int i=1;i<=j;i++){
            cout<<"*";
      }
    cout<<endl;
    }
      for(int i=1;i<=n;i++){
        for(int l=1;l<=i;l++){
            cout<<" ";
        }
        for(int k=1;k<=n-i;k++){
        cout<<"*";
       }
       cout<<endl;
      }
}