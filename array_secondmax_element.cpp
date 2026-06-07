#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max){
            smax=max;
            max=a[i];
        }
        else if(a[i]>smax && a[i]<max){
            smax=a[i];
        }
    }
    cout<<smax;
}
