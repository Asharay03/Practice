#include<iostream>
using namespace std;

int main()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << (char)('A' + j - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}

// int main(){
//     int n,i,j;
//     cout<<"Enter your triangle size= ";
//     cin>>n;
//     for(i=97;i<97+n;i++){
//         for(j=97;j<=i;j++){
//             if(j>=123){
//                 int l=j-26;
//                 cout<<char(l)<<char(l);
//             }
//             else{
//                 cout<<char(j);
//             }
//         }
//         cout<<"\n";
//     }
//     return 0;
// }