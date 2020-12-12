#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;
#define int int64_t
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string ss;cin>>ss;
    if(ss.length()<3)
    {
        cout<<ss<<"\n";
        return 0;
    }
    string c1="";
    c1+=ss[0];c1+=ss[1];
    for(int i=2;i<ss.length();i++)
    {
        if(ss[i]==ss[i-1] and ss[i]==ss[i-2])
        {
            ;
        }
        else
        {
            c1+=ss[i];
        }
    }
    
    string ans="";
    for(int i=0;i<c1.length();i++)
    {
        if(i<(int)c1.length()-1 and c1[i]==c1[i+1])
        {
            if(i<(int)c1.length()-3)
            {
                if(c1[i+2]==c1[i+3])
                {
                    ans+=c1[i];
                    ans+=c1[i];
                    ans+=c1[i+2];
                    i+=3;
                }
                else
                {
                    ans+=c1[i];
                }
            }
            else
            {
                ans+=c1[i];
            }
        }
        else
        {
            ans+=c1[i];
        }
    }
    cout<<ans<<"\n";
    return 0;
}


























//
//hello
//
//1. 3 same character
//
//resolved
//
//
//
//
//helloo
//2. couple of identical letters immediately followed by another couple of identical letters is a typo too
//
