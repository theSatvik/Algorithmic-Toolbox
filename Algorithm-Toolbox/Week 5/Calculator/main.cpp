#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void calc(ll n)
{
    vector<ll> s(n + 1);
    vector<ll> p(n + 1);

    for (size_t i = 2; i <= n; i++) {
        s[i] = s[i-1] + 1;
        p[i] = i - 1;
        if (i % 2 == 0) {
            if (s[i/2] < s[i]) {
                s[i] = s[i/2] + 1;
                p[i] = i/2;
            }
        }
        if (i % 3 == 0) {
            if (s[i/3] < s[i]) {
                s[i] = s[i/3] + 1;
                p[i] = i/3;
            }
        }
    }
    cout <<s[n] << "\n";
    list<ll> ans;
    for (size_t i = n; i != 0; i = p[i])
        ans.push_front(i);
    for (auto it = ans.begin(); it != ans.end(); ++it)cout << *it  << " ";
}
int main() {
    ll n;
    cin >> n;
    calc(n);
}
