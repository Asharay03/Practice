#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter your size= ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(i=n;i>0;i--){
        for(j=i;j>0;j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
        
    return 0;
}