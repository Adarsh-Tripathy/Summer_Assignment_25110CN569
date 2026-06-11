#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int target;
    cin>>target;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        int temp=target-a[i];
        if(m.find(temp)!=m.end()){
            cout<<temp<<" "<<a[i];
            return 0;
        }
        else{
            m[a[i]]=i;
        }
    }
    cout<<"no pair found";
}







