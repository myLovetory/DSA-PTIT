#include<bits/stdc++.h>
using namespace std;
//truyen cac gtri vao
int x[10]={1,2,5,10,20,50,100,200,500,1000};
void thamlam(long n){
    int cnt=0;
    for(int i = 9;i>=0;i--){
        if(n >= x[i]){
            cnt += n/x[i];
            n = n % x[i];
        }
    }
    cout<<cnt<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long n;cin>>n;
        thamlam(n);
    }
}
