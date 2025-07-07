#include<iostream>
using namespace std;

int main(){
    cout<<"Enter your size";
    int n,i,j;
    cin>>n;
    // for(i=n;i>0;i--){
    //     for(j=i;j>0;j--){
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // }  
                        //    Alternative ans

     for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}