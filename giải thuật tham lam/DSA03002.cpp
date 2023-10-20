#include<bits/stdc++.h>
using namespace std;
//chuyen het 5 thanh 6
long xuoi(string n){
    for(int i = 0;i<n.length();i++){
        if(n[i]=='5'){
            n[i]='6';
        }
    }
    long sum = 0;
    //chuyen string sang long
    for(int i =0;i<n.length();i++){
        sum*=10;
        sum+=(int)(n[i]-'0');
   }
   return sum;
}
long nguoc(string n){
for(int i = 0;i<n.length();i++){
        if(n[i]=='6'){
            n[i]='5';
        }
    }
    long sum = 0;
    //chuyen string sang long
    for(int i =0;i<n.length();i++){
        sum*=10;
        sum+=(int)(n[i]-'0');
    }
    return sum;
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<nguoc(a)+nguoc(b)<<" "<<xuoi(a)+xuoi(b);
}