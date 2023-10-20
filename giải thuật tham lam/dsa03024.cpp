#include<bits/stdc++.h>
using namespace std;
//khai báo kiểu pair
using pii = pair<int ,int>;
bool cmp(pii a,pii b){
    //so sanh time finish 2 công việc
    if(a.second==b.second){
        return a.first;
    }
    return a.second<b.second;

}
int main(){
    ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pii> v;
        for(int i = 0;i<n;i++){
            int x,y;
            cin>>x>>y;
            //nhap hai time vào v
            v.push_back({x,y});
        }
        sort(v.begin(),v.end(),cmp);
        int dem =1;
        //time từ lúc kết cv đầu tiên
        int time = v[0].second;
        for(int i =0;i<n;i++){
            //cong việc 1 bắt đầu sau khi T kết thúc
            if(time >= v[i].first){
                dem++;
                time = v[i].second;

            }
        }
        cout<<dem<<endl;
    }

}
