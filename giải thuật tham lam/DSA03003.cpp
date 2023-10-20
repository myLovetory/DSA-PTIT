#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
int main(){
    int t = 1, n, mod = 1e9 + 7;
    cin >> t;
    while(t--)
    {
        long long sum = 0;
        cin >> n;
        vector<int> v(n);
        for(int &i : v) cin >> i;
        sort(all(v));
        for(int i = 0; i < n; ++i)
        {
            sum += 1LL * v[i] * i;
            sum %= mod;
        }
        cout << sum << endl;
    }
    return 0;
}