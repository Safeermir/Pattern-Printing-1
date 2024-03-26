#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    
    for(int j=1;j<=n;j++){
    for(int i=j;i>=1;i--){
       cout<<i<<" ";
    }
    cout<<endl;
    }
}