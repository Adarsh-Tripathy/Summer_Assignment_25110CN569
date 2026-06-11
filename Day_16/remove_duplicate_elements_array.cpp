#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    int i=0;
    for(auto it:s){
        a[i]=it;
        i++;
    }
    for(int j=0;j<i;j++){
        cout<<a[j]<<" ";
    }
}







