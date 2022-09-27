#include <iostream>
using namespace std;

int binary(int arr[],int n,int key){
    int first=arr[0],last=arr[n-1];
    for(int i=0;i<n;i++){
        int mid=(first+last)/2;
        if(key==arr[mid])
        cout<<"found";
        else if(key<=arr[mid])
        last=mid-1;
        else 
        first=mid+1;
    }
    return key;

}

int main (){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt","r",stdin);
        freopen("Output.txt","w",stdout);
    #endif

    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
}