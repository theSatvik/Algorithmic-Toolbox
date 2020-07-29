#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll m;cin>>m;ll cnt=0;
    cnt+=m/10;
    m=m%10;
    cnt+=m/5;
    m%=5;
    cnt+=m;
    cout<<cnt<<endl;
}
