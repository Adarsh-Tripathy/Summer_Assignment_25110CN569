#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int max=a[0];
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<"maximum element is "<<max<<endl;
    cout<<"minimum element is "<<min<<endl;
}
