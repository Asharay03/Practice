#include<iostream>
using namespace std;

int main(){
    cout<<"Enter your hollow star pattern size = ";
    int i,k,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
          if(i>0&&i<n-1&&k>0&&k<n-1)
          cout<<" ";
          else{
            cout<<"*";
           }
         }
        cout<<"\n";
    }
    return 0;
}