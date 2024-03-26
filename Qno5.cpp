#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int j=1;j<=n;j++){
          for(int i=1;i<=j;i++){
            cout<<"* ";
      }
    cout<<endl;
    }
      for(int i=1;i<=n;i++){
        for(int k=1;k<n+1-i;k++){
        cout<<"* ";
       }
       cout<<endl;
      }
}