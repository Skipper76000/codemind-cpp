#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==1){
            if(i%2!=1){
            cnt=1;
            }
        }
        
    }
    if(cnt==0){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}