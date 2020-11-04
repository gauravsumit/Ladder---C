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
    int req_len,req_sum;cin>>req_len>>req_sum;
    if(req_sum>9*req_len||(req_sum==0 and req_len>1))
    {
        cout<<"-1 -1\n";
    }
    else
    {
        int temp_len=req_len,temp_sum=req_sum;
        
        if(temp_len>1 and temp_sum<=(req_len-1)*9)
        {
            cout<<"1";
            temp_sum--;
            temp_len--;
        }
        string hmm="";
        while(temp_len--)
        {
            hmm+=to_string(min((int)9,temp_sum));
            temp_sum-=min((int)9,temp_sum);
        }
        for(int i=hmm.length()-1;i>-1;i--)
            cout<<hmm[i];
        cout<<" ";
        while(req_len--)
        {
            cout<<min((int)9,req_sum);
            req_sum-=min((int)9,req_sum);
        }
        cout<<"\n";
    }
}



//
//123=1+2+3=6
//
//m length ->integer with sum "s"
//
//1->maximum integer
//2->minimum integer
//
//
//maximum-> m len
//
//most significant place -> 100
//sum=9 d=3
//
//900
//
//minimum
//
//sum<=(length-1)*9
//108
//8->80 ->08
//
//length=3 sum=25
//997
//799
//
//sum=17
//980
//sum=100 len=1
//
//0 lenght=2
//00->0
//0 0
//
//length=1
//length>1
//1"min"
//sum=7
//7
//req_sum=7
//min(req_sum,9)<<
//req_sum-=min(req_sum,9)
