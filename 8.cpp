#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;
#define int int64_t
int n,k,d;
int ans=0;
int dp[200][200];
int dpsol(int b,int c)
{
    if(b<0)
        return 0;
    if(b==0)
    {
        if(c>=d)
            return 1;
        return 0;
    }
    if(dp[b][c]!=-1)
        return dp[b][c];
    int toko=0;
    for(int i=1;i<=k;i++)
    {
        toko+=dpsol(b-i,max(c,i));
        toko%=mod;
    }
    toko%=mod;
    return dp[b][c]=toko;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cin>>n>>k>>d;
    memset(dp,-1,sizeof(dp));
    cout<<dpsol(n,0)<<"\n";
    return 0;
}


//
//
//b=5
//
//k=7
//
//7 lekin weight utna bacha hi nahi tha
//
//
//
//
//10^4
//
//n=10
//
//edge =5
//
//b=5->edge =1
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//[total weight required =100]*[highest weight found=100]
//-1 -1 -1
