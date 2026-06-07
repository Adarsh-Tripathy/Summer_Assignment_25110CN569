#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    int flag=0;
    cin>>n;
    map<int,int>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    for(auto i:m){
        if(i.second>1){
            cout<<"duplicate exists";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"no duplicates";
    }
    
}
