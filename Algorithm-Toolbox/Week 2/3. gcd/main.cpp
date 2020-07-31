#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll solve(ll n)
{
    int hash[60] = {0};
    hash[0] = 0;hash[1] = 1;
    for(int i = 2 ; i<60 ; i++)
         hash[i]=(hash[i-1]+hash[i-2])%10;

    ll sum = 0;
    for(int i = 1; i<=(n%60); i++ )
        sum+=((hash[i])*(hash[i]))%60;
    return sum%10;
}
int main()
{
    ll n;
    cin>>n;
    cout<<solve(n)<<endl;
}

