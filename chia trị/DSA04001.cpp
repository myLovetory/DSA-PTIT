#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
long long luythua(long long n,long long k){
    if(k==0){
        return 1;
    }
    if(k==1){
        return n%mod;
    }
    long long x = luythua(n, k/2);
	if(k%2==0)
		return (x*x)%mod;
	else return ((x*x)%mod*n)%mod;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n,k;
        cin>>n>>k;
        cout<<luythua(n,k)<<endl;
    }
}