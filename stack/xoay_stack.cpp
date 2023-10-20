#include<bits/stdc++.h>
using namespace std;
string restring(string s)
{
    string res;
    stack<char> st;
    for (int i = 0; i < s.length(); i++){
        st.push(s[i]);
    }
    while(st.empty() == false){
        res = res + st.top();
        st.pop();
    }
    return res;
}
int main(){
    string s;
    cin>>s;
    string kqua = restring(s);
    cout<<kqua<<endl;
}