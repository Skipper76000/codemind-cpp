#include<iostream>
using namespace std;
int add_digits(int num){
    int sum=0;
    while(num>0){
            int s=num%10;
            sum+=s;
            num/=10;
    }
    if(sum>9){
        add_digits(sum);
    }
    else{
        cout<<sum;
    }
    return 0;
}
int main(){
    int n;cin>>n;
    if(n<10 && n>0){cout<<n;
    }
    if(n>10){
        add_digits(n);
}
return 0;
}