#include<bits/stdc++.h>
using namespace std;
long long int solve()
{
	long long money; cin >> money;
	long long dp[money + 1], coins[3] = {4, 3, 1};
	dp[0] = 0;
	for (int i = 1; i <= money; i++)
	{
		dp[i] = INT_MAX;
	}
	int numcoins;
	for (int i = 1; i <= money; i++) {
		for (int j = 0; j < 3; j++)
		{
			if (i >= coins[j])numcoins = dp[i - coins[j]];
			if (numcoins + 1< dp[i])dp[i] = numcoins + 1;
		}
	}
	return dp[money];
}
int main()
{
	cout << solve() << endl;
}
