#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;
#define int int64_t
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m,k;cin>>n>>m>>k;
    bool flag=true;
    vector<pair<int,int> > ans;
    for(int i=1;i<=n;i++)
    {
        if(flag)
        {
            for(int j=1;j<=m;j++)
            {
                ans.push_back(make_pair(i,j));
            }
            flag=false;
        }
        else
        {
            flag=true;
            for(int j=m;j>0;j--)
            {
                ans.push_back(make_pair(i,j));
            }
        }
    }
    int pos=0,toko=k;
    for(int i=0;i<ans.size();i+=2)
    {
        pos=i;
        if(k==1)
            break;
        cout<<2<<" "<<ans[i].first<<" "<<ans[i].second<<" "<<ans[i+1].first<<" "<<ans[i+1].second<<"\n";
        k--;
    }
    cout<<ans.size()-(toko-1)*2<<" ";
    for(int i=pos;i<ans.size();i++)
        cout<<ans[i].first<<" "<<ans[i].second<<" ";
    cout<<"\n";
    return 0;
}



//
//3 3 3
//
//1->1,1 1,2
//2->1,3 2,3
//3->2,1 2,2 3,1 3,2 3,3
//
//
//
//k tubes
//
//k-1 tubes will be of length 2
//
//
//last tube mai bachi yui sari daal do
//
//1,1 1,2  1,3 2,3 2,2 2,1


//
//1,1 1,2 1,3  2,3 2,2 2,1 3,1 3,2 3,3
