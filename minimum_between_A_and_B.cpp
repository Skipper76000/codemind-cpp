#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a,b;
    cin>>a>>b;
    int min=9999;
    for(int i=0;i<n;i++){
        if(arr[i]>=a && arr[i]<=b){
            min=min<arr[i]?min:arr[i];
        }
    }
    if(min!=9999)
    cout<<min<<"
";
    else
    cout<<"-1"<<"
";
}