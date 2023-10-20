#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k;
		cin>>s>>k;
		int n = s.length();
		int dem[100000] = {0};
		for(int i = 0;i<=n;i++){
			string so = s.substr(i,k);
			int number = stoi(so);
			dem[number]++;
		}
		for(int i = 0;i<1000000;i++){
			if(dem[i] > 0){
				cout<<i<<endl;
			}
		}
	}
}