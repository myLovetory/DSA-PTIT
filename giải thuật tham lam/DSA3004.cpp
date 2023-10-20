#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[100];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long x = 0,y=0;
        // cac so vtri chan se cong voi nhau
        for(int i =0;i<n;i++){
            if(i%2==0){
                x = 10*x + a[i];
            }else{
                y = 10*y +a[i];
            }
        }
        cout<<x + y<<endl;
    }
}