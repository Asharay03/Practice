#include<iostream>
using namespace std;

int main(){
    int n,i,j,k;
    cout<<"Enter your size= ";
    cin>>n;
    for(i=n;i>0;i--){
        for(j=n-i;j>0;j--){
           cout<<" ";
        }
        for(k=1;k<=i;k++){
            if(k==1||k==i||i==n){
            cout<<"*";
        }
            else{
            cout<<" "; 
        }
    }
        cout<<endl;
    }
    return 0;
}