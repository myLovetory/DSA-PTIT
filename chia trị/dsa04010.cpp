#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[100];
        nhap(a,n);
        int sum = 0,ans = 0;
        for(int i = 0;i<n;i++){
            sum = max( sum + a[i], a[i]);
            ans = max(ans, sum);
        }
        cout<< ans <<endl;
    }
}