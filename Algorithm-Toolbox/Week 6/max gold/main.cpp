#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll solve(ll W,vector<ll> &w) {
  ll size = w.size();
  ll** weights = new ll* [size + 1];

  for (ll i = 0; i <= size; i++) {
    weights[i] = new ll[W + 1];
  }

  for (ll i = 0; i <= size; i++) {
    for (ll j = 0; j <= W; j++) {
        if (i==0 || j==0) {
          weights[i][j] = 0;
        }
        else if (w[i - 1] <= j)
          weights[i][j] = max(w[i - 1] + weights[i - 1][j - w[i - 1]],  weights[i - 1][j]);
        else
          weights[i][j] = weights[i - 1][j];
    }
  }

  ll result = weights[size][W];
  for (ll i = 0; i < size; i++) {
    delete[] weights[i];
  }

  delete[] weights;

  return result;
}
int main() {
    ll W,n;
    cin >> W >> n;
    vector<ll>w;
    for(ll i=0;i<n;i++)
    {
        ll g;cin>>g;w.push_back(g);
    }
    cout<<solve(W,w);
}
