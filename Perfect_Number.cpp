#include<iostream>
using namespace std;
void positive_num(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"True";
    }
    else{
       cout<<"False"; 
    }
}
int main(){
    int a;
    cin>>a;
    if(a>0){
        positive_num(a);
    }else{
        cout<<"False";
    }
    return 0;
}