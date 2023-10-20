#include<bits/stdc++.h>
using namespace std;

int n,m;
struct tui{
    int w = 0,v=0;
};
//mang khai báo struct
tui a[105];
int dp[100][100];
int res = 0;
void solve(){
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++)
        {
            //nếu trọng lượng tối đa < trọng lượng đồ vật thứ i

            if(j<a[i].w)
            {
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = max(dp[i-1][j] , dp[i-1][j-a[i].w] + a[i].v);

            }
            res = max(res,dp[i][j]);
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i = 1; i<=n;i++){
        cin>>a[i].w >>a[i].v;
    }
    solve;
    cout<<res;
    return 0;
}
