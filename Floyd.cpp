#include <iostream>
using namespace std;
int main (){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt","r",stdin);
        freopen("Output.txt","w",stdout);
    #endif

    int n,k=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        cout<<k;
        k++;
        }
        cout<<endl;
    }
    return 0;
}