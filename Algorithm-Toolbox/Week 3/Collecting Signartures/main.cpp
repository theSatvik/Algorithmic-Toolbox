#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
bool pred(pair<ll,ll>a,pair<ll,ll>b)
{
    return a.second<b.second;
}
void solve(vector< pair<ll,ll> > v)
{
    sort(v.begin(),v.end(),pred);
    ll a=v[0].second;
    vector<ll>ans;
    ans.push_back(a);
    for(ll i=1;i<v.size();i++)
    {
        if(a<v[i].first || v[i].second<a)
        {
            a=v[i].second;
            ans.push_back(a);
        }
    }
    cout<<ans.size()<<"\n";
    for(ll i =0 ; i<ans.size();i++)
    cout<<ans[i]<<" ";

}
int main()
{
    ll n;cin>>n;
    vector< pair<ll,ll> >v;
    for(int i =0;i<n;i++)
    {
        ll a,b;cin>>a>>b;
        v.push_back({a,b});
    }
    solve(v);
}
