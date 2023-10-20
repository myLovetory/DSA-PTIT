#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    stack<int> stk;
    while(cin>>s){
        if(s == "push")
        {
            cin>>n;
            stk.push(n);
        }
        else if(s=="pop") stk.pop();
        else if(s=="show")
        {
            vector<int > vt;
            if(stk.size() == 0)
            {
                cout<<"empty"<<endl;
                continue;
            }
            while(stk.size()  > 0)
            {
                vt.push_back(stk.top());
                stk.pop();
            }
            reverse(vt.begin(),vt.end());
            for(int i = 0;i<vt.size();i++)
            {
                cout<<vt[i]<<" ";
                stk.push(vt[i]);
            }
            cout<<endl;
        }
    }
}