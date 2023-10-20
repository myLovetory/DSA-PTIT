#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    int n;
    while(t--){
        cin>>n;
        vector<int>a(n+5),f(n+5,0);
        for(int  i =1;i<= n;i++){
            cin>>a[i];
        }
        int kqua = 0;
        for(int i = 1;i<=n;i++){
            f[a[i]] = f[a[i]-1]+1;
            kqua = max(kqua , f[a[i]]);
        }
    cout<<n-kqua;
    }
}