#include<bits/stdc++.h>
using namespace std;
string nhiphan(int n){
    string kqua;
    stack<char>st;
    while(n>0){
        //nhap stack so du n chia 2
        st.push(n%2 + '0');
        n/=2;
    }
    while(!st.empty()){
        kqua += st.top();
        st.pop();
    }
    return kqua;
}
int main(){
    int n;
    cin>>n;
    string kqua = nhiphan(n);
    cout<<kqua<<endl;
}