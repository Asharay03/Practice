#include<iostream>
using namespace std;

int main(){
    cout<<"Enter your ceterfilled star pattern size = ";
    int i,k,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(k=1;k<=n;k++){
          if(i==1||i==n||k==1||k==n||(k==(n/2)+1&&(i==(n/2)+1)))
          cout<<"*";
          else{
            cout<<" ";
           }
         }
        cout<<"\n";
    }
    return 0;
}