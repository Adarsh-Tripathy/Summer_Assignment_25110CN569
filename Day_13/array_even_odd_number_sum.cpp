#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int odd=0,even=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            even+=a[i];
        }
        else odd+=a[i];
    }
    cout<<"Sum of even numbers: "<<even<<endl;
    cout<<"Sum of odd numbers: "<<odd<<endl;
}
