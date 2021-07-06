// Problem Link : https://codeforces.com/contest/1453/problem/B
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <functional>
#include <string>
#define SIZE 100008
#define mod(ll) (1e9 + 7)
#define vi vector<int>
#define max(a, b) (a > b ? a : b)
#define INF 0x3f3f3f3f
#define min(a, b) (a < b ? a : b)
#define abs(a) ((a) > 0 ? (a) : -(a))
#define all(a) a.begin(), a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define pb push_back
#define pi pair<ll, ll>
#define ll long long int
#define pqq priority_queue
#define reverse(a) reverse(all(a))
#define IOS                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
#define rep(i, n) for (int i = 0; i < n; ++i)
#define c(a) cout << a << "\n";
using namespace std;
void solve() {
  ll n;
  cin >> n;
  ll arr[n];
  for (int i = 1; i <= n; ++i) {
    cin >> arr[i];
  }
  // 1 - change
  ll res = 0;
  ll temp=INT_MAX;
  for (int i = 1; i < n; i++) {
    res += abs(arr[i] - arr[i + 1]);
  }
   temp = min(res, res - abs(arr[1] - arr[2]));
  for (int i = 2; i < n; ++i) {
    temp =
        min(temp, res - abs(arr[i] - arr[i - 1]) - abs(arr[i] - arr[i + 1]) +
                      abs(arr[i + 1] - arr[i - 1]));
  }
  temp=min(temp,res-abs(arr[n]-arr[n - 1]));
  cout << temp << "\n";
}

int main() {
  IOS ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
