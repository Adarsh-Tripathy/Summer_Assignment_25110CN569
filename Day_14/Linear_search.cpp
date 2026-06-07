#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n];
    int k;
    cin>>k;
    bool flag=false;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==k){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"yes found at index "<<i;
    }
    else cout<<"not found";
}
