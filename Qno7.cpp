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
    for(int i=1;i<=n;i++){
       cout<<"*";
    }
    cout<<endl;
    }
}