    #include <iostream>
using namespace std;
int main (){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt","r",stdin);
        freopen("Output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int reverse=0;;

    while(n>0){
        int last=n%10;
        reverse=reverse*10 + last;
         n/=10;
    }
    cout<<reverse;



    return 0;
}