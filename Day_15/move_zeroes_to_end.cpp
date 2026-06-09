#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,j;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(a[i] != 0){
            swap(a[i],a[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
