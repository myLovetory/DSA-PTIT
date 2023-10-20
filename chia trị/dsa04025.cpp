#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9;
long long fb[93];
long long fibo(int n){
    int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    long long k = n >> 1;
    if(k & 1){
        
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long res = fibo(n) % mod;
        cout<< res <<endl;
    }
}