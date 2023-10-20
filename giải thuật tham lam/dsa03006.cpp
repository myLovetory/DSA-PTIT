/*
ý tưởng của bài này sẽ là tạo 1mang b[i] đã đc sắp xếp
nếu a[i] bằng với giá trị đối của nó
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int a[100];
        int b[100];
        for(int i = 0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int ok  = 1;
        for(int i = 0;i<n/2;i++){
            if(b[i]!=a[i] && b[i]!=a[n-i-1]){
                ok =0;
                break;
            }
        }
        if(ok==1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }
}