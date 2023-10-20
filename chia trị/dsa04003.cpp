#include<bits/stdc++.h>
using namespace std;
const int modulo = 123456789;
long long luythua(long long n,long long k){
    if(k==0){
        return 1;
    }
    long long x = luythua(n,k/2);
    if(k%2==0){
        return (x*x)%modulo;
    }else{
        return ((x*x)%modulo*n)%modulo;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long k;
        cin>>k;
        long long n=2;
        cout<<luythua(n,k-1)<<endl;
    }
}