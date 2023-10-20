#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i = 1;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int max1 = a[0]*a[1]*a[2];
    int max2 = a[n-1]*a[n-2]*a[n-3];
    int max3 = a[0]*a[1];
    int max4 = a[n-1]*a[n-2];
    cout<<max(max(max1,max2),max(max3,max4));
}