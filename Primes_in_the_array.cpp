#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(isPrime(arr[i])){
            cnt++;
        }
    }
    cout<<cnt;
}