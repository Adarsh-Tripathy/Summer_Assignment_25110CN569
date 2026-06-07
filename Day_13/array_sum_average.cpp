#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    float sum=0,avg;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    avg=sum/n;
    cout<<"sum is "<<sum<<endl;
    cout<<"average is "<<avg<<endl;

} 
