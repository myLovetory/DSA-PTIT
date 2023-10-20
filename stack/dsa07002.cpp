#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    int n;
    stack<int> st;
    while(t--)
    {
        cin>>s;
        if(s == "PUSH")
        {
            cin>>n;
            st.push(n);
        }
        else if(s=="POP" && st.size()>0) st.pop();
        else if(s=="PRINT")
        {
            if(st.size() == 0)
            {
                cout<<"NONE"<<endl;
            }
            else{
                cout<<st.top()<<endl;
            }
        } 
    }
}