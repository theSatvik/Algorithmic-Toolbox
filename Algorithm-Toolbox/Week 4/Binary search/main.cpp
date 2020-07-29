#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bi(ll a[],ll low , ll high,ll key)
{
    if(high<low)return -1;
    if(a[low]==key)return low;
    ll mid=(low+high)/2;
    if(a[mid]==key)return mid;
    else if(a[mid]>key)return bi(a,low,mid-1,key);
    else return bi(a,mid+1,high,key);
}

int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll k;cin>>k;ll b[k];
    for(ll i=0;i<k;i++)cin>>b[i];

      for(ll j=0;j<k;j++)
        cout<<bi(a,0,n-1,b[j])<<" ";

    return 0;
}
