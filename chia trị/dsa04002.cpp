#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 +7;
long long luythua(long long n,long long k){
    if(k==0){
        return 1;
    }
    if(k==1){
        return n%mod;
    }
    long long x = luythua(n,k/2);
    if(k%2==0){
        return (x*x)%mod;
    }else{
        return ((x*x)%mod*n)%mod;
    }
}
long long dao(long long n){
    long long tmp = 0;
    while(n>0){
        tmp = tmp *10 + n % 10;
        n/=10;
    }
    return tmp;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n;
        k = dao(n);
        cout<<luythua(n,k)<<endl;
    }
}