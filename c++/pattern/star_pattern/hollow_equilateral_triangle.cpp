#include<iostream>
using namespace std;

int main(){
    int n,i,j,k;
    cout<<"Enter your size= ";
    cin>>n;
    for(i=0;i<n;i++){
    for(j=(n-i-1);j>0;j--){
        cout<<" ";
    }
    for(k=0;k<=i;k++){
        if(k==0||i==n-1){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    for(k=0;k<i;k++){
        if(k==i-1||i==n-1){
        cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<"\n";
    }
    return 0;
}