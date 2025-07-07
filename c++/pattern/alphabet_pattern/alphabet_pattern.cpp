#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    for(i=97;i<97+n;i++){
        for(j=97;j<=i;j++){
            if(j>=123){
                int l=j-26;
                cout<<char(l)<<char(l);
            }
            else{
                cout<<char(j);
            }
        }
        cout<<"\n";
    }
    return 0;
}