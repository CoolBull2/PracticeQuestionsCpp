#include <iostream>
using namespace std;
void fib(int num){
    int t1=0;
    int t2=1;
    int next;
    for (int i=1;i<=num;i++){
        cout <<t1<<" ";
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    return;
}

int main (){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt","r",stdin);
        freopen("Output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
     fib(n);
     return 0;
}

