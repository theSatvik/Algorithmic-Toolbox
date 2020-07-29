#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
   ll n;cin>>n;
   set<ll>s;
   ll c=1;
   while(n>0)
   {
       if(n<=2*c)
       {
           s.insert(n);
           break;
       }
       else {
        s.insert(c);
        n-=c;
       }
       c++;
   }
   cout<<s.size()<<"\n";
    for(auto i:s)
   {
       cout<<i<<" ";i++;
   }
}
