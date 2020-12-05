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
    vector<pair<int,int> > ar;
    for(int i=0;i<n;i++)
    {
        int x,y;cin>>x>>y;ar.push_back(make_pair(x,y));
    }
    sort(ar.begin(),ar.end());
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(ans>ar[i].second)
        {
            ans=max(ans,ar[i].first);
        }
        else
        {
            ans=max(ans,ar[i].second);
        }
    }
    cout<<ans<<"\n";
    return 0;
}

//
//3
//6 1
//5 2
//4 3
//
//
//
//ans=0
//
//4 3
//ans=3
//
//
//5 2
//ans=max(3,5)=5
//
//6 1
//ans=max(5,6)=6
//
//7 6
//ans=max(ans,6)=6


