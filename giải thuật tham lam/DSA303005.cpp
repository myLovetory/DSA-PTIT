#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    if(k > n/2) k = n - k;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int sum = 0;
		for(int i = k; i < n; i++)
		{
			sum += a[i];
		}
		for(int i = 0; i < k; i++)
			sum -= a[i];
		cout << abs(sum) << endl;
    }
}


