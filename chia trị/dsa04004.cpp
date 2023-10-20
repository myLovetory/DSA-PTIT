#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long cnt = 1;
        while(k%2==0){
            k>>=1;
            cnt++;
        }
        cout<<cnt<<endl;
    }

}