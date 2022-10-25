#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100]={0};
    int arr[n],cnt=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        a[arr[i]]++;
    }
    int min=999,max=0;
    for(int i=1;i<=n;i++){
        if(i==a[i]){
            cnt=1;
            min=min<a[i]?min:a[i];
            max=max>a[i]?max:a[i];
        }
    }
    if(cnt==1)
    cout<<min<<" "<<max<<"
";
    else
    cout<<"-1"<<"
";
}