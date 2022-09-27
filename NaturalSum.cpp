#include <iostream>
using namespace std;
bool check(int a, int b,int c){
    int max=a>b?(a>c?a:c):(b>c?b:c);
    if(max==a)
    if(a*a==b*b+c*c)
    return true;
    else if(max==b){
    if(b*b==c*c+a*a)
    return true;}
    else if(max==c){
    if(c*c==a*a+b*b)
    return true;}
    else return false;
}
int main (){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt","r",stdin);
        freopen("Output.txt","w",stdout);
    #endif
    int a,b,c;
    if(check(a,b,c))
    cout <<"Triplet";
    else 
    cout<<"Not";
}
