#include<iostream>
using namespace std;

int main(){
    cout<<"Enter your mirror image pattern size = ";
    int i,k,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(k=1;k<=(n-i-1);k++){
            cout<<" ";
        }
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}