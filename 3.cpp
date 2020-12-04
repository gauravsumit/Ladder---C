#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;
#define int int64_t
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int zero,one;cin>>zero>>one;
    string ans="";
    bool flag= one>zero ? true:false;
    while(zero || one)
    {
        if(flag)
        {
            if(one>zero and one>1)
                ans+="11",one-=2;
            else
                ans+="1",one-=1;
            if(zero)
            ans+="0",zero-=1;
        }
        else
        {
            ans+="0";zero--;
            if(one)
                ans+="1",one--;
        }
    }
    cout<<ans<<"\n\n\n";
    if(ans.find("111")<ans.size()||ans.find("00")<ans.size())
        cout<<"-1\n";
    else
        cout<<ans<<"\n";
    return 0;
}



//0s->  n
//
//1s-> m
//
//total-> n+m
//
//cond1-> no 2 zeroes consecutively
//cond2-> no 3 ones cons.
//
//approach ->
//
//try to form answer string
//01
//
//0s->4
//1s->6
//while 1s>0s and number of ones>1
//+11
//110110
//
//1s = 0s
//+'1' +'0'
//1101101010
//
//
//0s>1s
//
//ans= 01010
//
//10s->0
//
//final ans->
//0000000000
