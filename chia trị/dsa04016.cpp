#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        
        vector<int>a(n),b(m),res(n+m);

        for(int &i : a){
            cin>> i;
        }
        for(int &i : b){
            cin >> i;
        }

        merge(all(a) , all(b) , res.begin());

        cout<< res[k-1]<<endl;
    }
}