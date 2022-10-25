#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,t,b;
    cin>>s>>t>>b;
    int c=2*s*t*b*512;
    int tc=c/1024;
    cout<<tc<<"KB";
}