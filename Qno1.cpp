#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int a=1;
    for(int j=1;j<=n;j++){
    for(int i=1;i<=n;i++){
       cout<<a<<" ";
    }
    a++;
    cout<<endl;
    }
}