#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(ll a[],ll n,ll m)
{
     ll last=0,ans=0,cf=0;
    while(cf<=n)
    {   last=cf;
        while((cf<=n)&&((a[cf+1]-a[last])<=m))
           cf++;

        if(cf==last){return -1;}
        if(cf<=n)ans++;
    }
    return ans;
}
int main()
{
    ll d,m,n;cin>>d>>m>>n;
    ll a[n+2];
    a[0]=0;
    for(int i=1;i<=n;i++)cin>>a[i];
    a[n+1]=d;

 cout<<solve(a,n,m)<<endl;

}
