#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
bool pred(pair<ll,ll>a,pair<ll,ll>b)
{
    return ((double)a.first/a.second)>((double)b.first/b.second);
}
double knapsack(vector< pair<ll,ll> >items,ll n,ll cap)
{
    sort(items.begin(),items.end(),pred);
    ll cwt=0;
    double ans=0;
    for(int i=0;i<n;i++)
    {
        if(cwt+items[i].second<=cap)
        {
            ans+=items[i].first;
            cwt+=items[i].second;
        }
        else
        {
            ll a=cap-cwt;
            ans+=((double)a/items[i].second)*items[i].first;
            break;
        }
    }
    return ans;
}
int main()
{
    ll n,cap;cin>>n>>cap;
    vector< pair<ll,ll> >items;
    for(int i =0;i<n;i++)
    {
        ll val,wt;cin>>val>>wt;
        items.push_back({val,wt});
    }
    cout<<fixed<<setprecision(4)<<knapsack(items,n,cap)<<"\n";
}

