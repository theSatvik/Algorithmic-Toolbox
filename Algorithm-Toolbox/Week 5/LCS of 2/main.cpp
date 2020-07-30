#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){

	ll n;
	cin>>n;
	vector<ll> s1;
	for(ll i=0;i<n;i++){
		ll s;
		cin>>s;
		s1.push_back(s);
	}
	ll m;
	cin>>m;
	vector<ll> s2;
	for(ll i=0;i<m;i++){
	ll  s;
		cin>>s;
		s2.push_back(s);
	}

	int mat[s1.size()+1][s2.size()+1];

	for(ll i=0;i<=s1.size();i++)
		for(ll j=0;j<=s2.size();j++)
		{
			if(i==0 || j==0 )
				mat[i][j]=0;
			else
			{
				int a=0;
				if(s1[i-1]==s2[j-1])
					a = mat[i-1][j-1]+1;
				else
				    a = mat[i-1][j-1];
	mat[i][j]=max({mat[i-1][j],mat[i-1][j-1],mat[i][j-1],a});
			}
		}
	cout<<mat[s1.size()][s2.size()]<<endl;
}
