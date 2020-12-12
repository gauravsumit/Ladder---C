#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;
#define int int64_t
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int len,pos;cin>>len>>pos;
    string ss;cin>>ss;
    int ans=0;
    for(int i=0;i<len/2;i++)
    {
        char ar[2];
        ar[0]=ss[i];ar[1]=ss[len-1-i];
        sort(ar,ar+2);
        ans+=min(ar[1]-ar[0],'z'-ar[1]+1+ar[0]-'a');
    }
    len--;
    pos--;
    int mid=len/2;
    if(pos>mid)
        pos=len-pos;
    int st=0,en=mid;
    while(ss[st]==ss[len-st] and st<len)
        st++;
    while(ss[en]==ss[len-en] and en>0)
        en--;
    if(st>en)
        cout<<"0\n";
    else
    {
        ans+=min(abs(pos-st),abs(en-pos));
        ans+=(en-st);
        cout<<ans<<"\n";
    }
    return 0;
}











//
//
//
//
//abba
//
//ab  cd
//
//     z<- a ->b => cost=1
//        a<-b->c
//
//a->d  a->b->c->d =3
//        d->e->......z->a =x
//
//
//a->d =min(a->d,d->a) =3
//
//
//
//abcd 'en'   efgh 'en'X
//
//movement in string left or right =cost 1
//
//
//
//a a a 'st' b c d 'en' e e         e e x y z a a a
