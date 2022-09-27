#include <iostream>
using namespace std;
int main (){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt","r",stdin);
        freopen("Output.txt","w",stdout);
    #endif

    int a,b,c;
    cin >>a>>b>>c;
    if(a>b){
        if(a>c)
        cout<<a;
        else
        cout<<c;
    }
    if(b>a){
        if(b>c)
        cout<<b;
        else
        cout<<c;
    }
    return 0;
}