#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long > a(n+2);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        a[n+1] = 1e18;
        //tìm địa chi của biến k trong vector
        int kqua = lower_bound(a.begin(), a.end()-1 , k) - a.begin();
        
        //check xem co tìm thay k trong vector hay ko
        if(a[kqua] != k){
            kqua--;
        }
        if(kqua != -1){
            kqua++;
        }
        cout<< kqua <<endl;
    }
}