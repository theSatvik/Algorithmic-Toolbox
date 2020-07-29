#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,char> a, pair<int,char> b){
	if(a.first!=b.first)
		return a.first<b.first;
	else
		return a.second<b.second;
}
int main()
{

	int seg,poi;
	cin>>seg>>poi;

	vector<pair<int,char> > segments;
	for(int i=0;i<seg;i++)
   {
		int a,b;
		cin>>a>>b;
		segments.push_back(pair<int,char>(a,'l'));
		segments.push_back(pair<int,char>(b,'r'));

	}
	vector<int> ans;
	for(int i=0;i<poi;i++)
    {
		int a;
		cin>>a;
		ans.push_back(a);
		segments.push_back(pair<int,char>(a,'p'));
	}

	sort(segments.begin(),segments.end(),compare);
	vector<int>val;
	map<int,int> m;

	int c=0;
	for(auto x : segments)
        {
		if(x.second=='l')
			c++;
		else if(x.second=='r')
			c--;
		if(x.second=='p')
			m[x.first]=c;

		}
	for(int a : ans)
		val.push_back(m[a]);

    for(int ans:val)
		cout<<ans<<" ";
	return 0;
}
