#include<iostream>
using namespace std;

int main(){
    int n,i,j,k;
    cout<<"Enter your size= ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
          cout<<" ";
        }
        for(k=0;k<2*i+1;k++){
           if(k==0||i==n-1||k==2*i){
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