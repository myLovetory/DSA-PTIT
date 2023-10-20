#include<bits/stdc++.h>
using namespace std;
struct xuathien{
    int giatri,lanxuathien;
};

bool cmp(xuathien A, xuathien B)
{
    if(A.lanxuathien > B.lanxuathien)
    {
        return true;
    }
    if(A.lanxuathien == B.lanxuathien && A.giatri < B.giatri)
    {
        return true;
    }
    return false;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        xuathien M[1000];
        for(int i = 0;i<n;i++)
        {
            cin>M[i].giatri;
            M[i].lanxuathien = 0;
        }
        
    }
    
}