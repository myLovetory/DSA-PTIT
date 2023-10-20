#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    queue<int >q;
    for(int i = 1;i<=n;i++){
        q.push(i);
    }
    cout<<q.size()<<" "<<q.front()<<" "<<q.back()<<"\n";
}