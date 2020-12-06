#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;
#define int int64_t
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        m[x]++;
    }
    int dp[(int)1e5+100];
    dp[0]=0;
    dp[1]=m[1];
    for(int i=2;i<=1e5;i++)
    {
        dp[i]=max(dp[i-2]+m[i]*i,dp[i-1]);
    }
    cout<<dp[(int)1e5]<<"\n";
    return 0;
}































//
//
//
//point ->4 + 4 + 4 + 4 + 2
//
//
//n*x -> to pick x remove x-1 nd x+1
//
//
//
//3
//1 2 3
//
//3 1 =4
//
//
//by using all numbers less than eqal to 1 -> number of occ of 1
//
//1 1 1 1 1 2 2
//ans[0] = 0
//ans[1] = 5
//ans[2] = max(2*2+ ans[0],ans[1])=max(4+0,5)=5
//
//
//dp[i] = max(dp[i-2]+i*occ_of_i,dp[i-1]);
//dp[10^5]
