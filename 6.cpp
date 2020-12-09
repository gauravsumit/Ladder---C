#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;
#define int int64_t
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int a,b,c;cin>>a>>b>>c;
    int ar[]={a,b,c};
    sort(ar,ar+3);
    cout<<min((ar[0]+ar[1]+ar[2])/3,ar[0]+ar[1])<<"\n";
    return 0;
}















//
//red->r
//green -> g
//blue->b
//
//(r+g+b)/3 = value=number_of_tables = it will be correct
//
//
//not same_color_ballo should exist
//
//
//r->100
//
//g-> 1
//
//b-> 1
//
//100+1+1=102/3=34->32 only red
//
//
//min((r+g+b)/3  , g + b )
//
//rrg,rrb
