#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;
#define int int64_t
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m;cin>>n>>m;
    int x=0;
    set<pair<int,int> > ss;
    int k=min(n,m);
    while(1)
    {
        if(x>(k/2))
            break;
        ss.insert(make_pair(x,k-x));
        ss.insert(make_pair(k-x,x));
        x++;
    }
    cout<<ss.size()<<"\n";
    for(auto i:ss)
    {
        cout<<i.first<<" "<<i.second<<"\n";
    }
    return 0;
}




//
//
//n= 10
//m= 11
//
//
//
//size of collection(beautiful set of points) ?
//
//min(x,y)+1
//
//
//x=5 ,
//
//any other point cant have x=5
//
//
//x=0,1,2,3,4,5,6,7,8,9,10 = 10+1=11
//
//
//
//0,0
//1,1
//2,2
//3,3
//n=3
//
//
//x-x'=y-y'=k=dis=k*root(2)

//
//3,0
//2,1
//1,2
//0,3
