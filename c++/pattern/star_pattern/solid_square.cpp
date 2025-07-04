#include<iostream>
using namespace std;

int main(){
    cout<<"Enter your solid star pattern size = ";
    int i,k,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}