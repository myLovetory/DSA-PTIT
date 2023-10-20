#include <bits/stdc++.h> 
using namespace std; 
int main(){
    string s; 
    int n; 
    stack <int> st; 
    while(cin >> s){ 
            if(s == "push"){ 
                cin >> n; 
                st.push(n); 
            } else if(s == "show"){
                stack <int> temp; 
                if(st.empty()) 
                    cout << "empty\n"; 
                while(!st.empty()){ 
                    temp.push(st.top()); 
                    st.pop(); 
                } 
                while(!temp.empty()){ 
                    cout << temp.top() << " "; 
                    st.push(temp.top()); 
                    temp.pop(); 
                } 
            cout << endl; 
            }  else if(s == "pop")
                    st.pop(); 
            } 
        }