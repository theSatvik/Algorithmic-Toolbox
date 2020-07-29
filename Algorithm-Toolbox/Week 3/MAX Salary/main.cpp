#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
bool pred(ll a,ll b)
{
    return (to_string(a)+to_string(b))>(to_string(b)+to_string(a));
}
int main()
{
    ll n;cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n,pred);
    for(ll i=0;i<n;i++)cout<<a[i];
}
