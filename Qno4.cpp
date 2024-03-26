#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int j=1;j<=n+1;j++){
          char a=65;
    for(int i=1;i<=j;i++){
     if(j%2==0) {
          cout<<a<<" ";
           a++;
     }
     else cout<<i<<" ";
      
    }

    cout<<endl;
    }
}