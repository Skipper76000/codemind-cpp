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
    int min=999,max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        min=min<arr[i]?min:arr[i];
        max=max>arr[i]?max:arr[i];
    }
    for(int i=0;i<n;i++){
        if(min==arr[i]){
            min=i;
        }
        if(max==arr[i]){
            max=i;
        }
    }
    int cnt=0;
    int temp=min;
    int temp1=max;
    min=min<temp1?min:temp1;
    max=max>temp?max:temp;
    for( int i=min;i<=max;i++){
        if(isPrime(arr[i])){
            cnt++;
        }
    }
    cout<<cnt;
}