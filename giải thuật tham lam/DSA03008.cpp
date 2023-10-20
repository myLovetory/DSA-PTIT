#include<bits/stdc++.h>
using namespace std;
struct hdong{
    int start,finish;
};
bool cmp(hdong a, hdong b){
    //kthuc sớm hơn thì làm trước
    return a.finish<b.finish;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        hdong a[n];
        for(int i =0;i<n;i++){
            cin>>a[i].start;
        }
        for(int i = 0;i<n;i++){
            cin>>a[i].finish;
        }
        sort(a,a+n,cmp);
        //ban đầu có 1 công việc, mang bd từ 0 nên int i = 0;
        int dem = 1,i=0;
        for(int j = 1;j<n;j++){
            //hành ddoongjj i kết thúc trc khi hành đọng j bắt đầu
            if(a[j].start>=a[i].finish){
                dem++;
                i=j;
            }
        }
        cout<<dem<<endl;
    }
}