#include<iostream>
using namespace std;

int main(){
    cout<<"Enter your hollow right angle triangle pattern size = ";
    int i,k,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(k=0;k<=i;k++){
            if(k==0||i==n-1||k==i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}