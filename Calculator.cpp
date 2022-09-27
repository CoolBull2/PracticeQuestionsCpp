#include <iostream>
using namespace std;
int main (){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt","r",stdin);
        freopen("Output.txt","w",stdout);
    #endif

    int a,b;
    char c;
    cin>>a>>c>>b;
    switch(c){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case 'x':
        cout<<a*b;
        break;
        default:
        cout<<"Error";
    }
    return 0;
    
}