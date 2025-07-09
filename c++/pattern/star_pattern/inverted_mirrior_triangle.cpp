# include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your size= ";
    cin >> n;
    for(int i=n; i>0; i--){
        for (int j=n-i; j>0; j--){
            cout<<" ";
        }
        for (int k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}