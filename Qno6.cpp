#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows:";
    cin>>m;
    int n;
    cout<<"Enter the number of columns:";
    cin>>n;
    for(int j=1;j<=m;j++){
    for(int i=1;i<=n;i++){
        if((i==1||j==1)||(i==n||j==m))
       cout<<"*";
       else cout<<" ";
    }
    cout<<endl;
    }
}