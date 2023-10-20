#include<bits/stdc++.h>
using namespace std;

long long fb[93];

char fibo(int n, long long k){
    if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k <= fb[n-2]) return fibo(n-2, k);
	return fibo(n-1, k-fb[n-2]);
}

int main(){
    int t; cin >> t;
	fb[0] = 0; fb[1] = 1;
	for(int i = 2; i <= 92; i++)
		fb[i] = fb[i-1] + fb[i-2]; 
	while(t--)
	{
		int n; long long k; cin >> n >> k;
		cout << fibo(n, k) << endl;
	}
	return 0;
}