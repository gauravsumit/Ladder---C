#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;
typedef vector<int64_t> vi;
typedef pair< int64_t,int64_t> ii;
typedef vector<pair<int64_t, int64_t> > vp;
typedef vector<pair<int64_t, ii> > vpp;
#define mp make_pair
#define f first
#define s second
#define pb push_back
#define INF 1e9
#define SIZE 200001
#define mod 1000000007
#define int int64_t
void solve();
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
void solve()
{
    int n;cin>>n;
    int B[n+10];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
        sum+=B[i];
    }
    int ans=0;
    if(sum%3==0)
    {
        int num1=sum/3;
        int num2=2*num1;
        sum=0;
        int c1=0;
        for(int i=0;i<n-1;i++)
        {
            sum+=B[i];
            if(sum==num2)
            {
                ans+=c1;
            }
            if(sum==num1)
            {
                c1++;
            }
        }
    }
    cout<<ans<<"\n";
}



 1 1 1
firs_part->1
second_part->1
third_part->1

numberof_div_ways=1
