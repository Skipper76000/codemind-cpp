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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float a=0;
    float sum=0;
    for( int i=0;i< n;i++){
        if(isPrime(arr[i])){
            sum+=arr[i];
            a++;
        }
    }
    float avg=(float)(sum/a);
    printf("%.2f",avg);
}