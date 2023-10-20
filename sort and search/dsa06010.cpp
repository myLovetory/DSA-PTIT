#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int t ;
    std::cin>>t;
    while(t--){
        int d[10]={0};
        int n,a;
        std::cin>>n;
        for(int i = 0; i< n ;i++)
        {
            std::cin>>a;
            while(a)
            {
                d[a%10] = 1;
                a/=10;
            }
        }
        for(int i = 0;i<10;i++)
        {
            if(d[i])
            {
                std::cout<<i<<" ";
            }
        }
        std::cout<<std::endl;
    }
}