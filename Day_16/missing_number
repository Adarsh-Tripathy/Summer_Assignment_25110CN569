#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    int sum=0;
    for(int i=0;i<n-1;i++){
        count=count^a[i];
        sum=sum^(i+1);
    }
    sum=sum^n;
    cout<<(sum^count);
}







