#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    // Compress sums
    // dp[i] = number of ways with a certain sum and parity
    // We'll use map for sparse DP
    
    map<int, long long> dp_even, dp_odd;
    dp_even[0] = 1;
    
    for (int i = 0; i < n; i++) {
        map<int, long long> new_even = dp_even;
        map<int, long long> new_odd = dp_odd;
        
        for (auto &p : dp_even) {
            new_odd[p.first + a[i]] = (new_odd[p.first + a[i]] + p.second) % MOD;
        }
        
        for (auto &p : dp_odd) {
            new_even[p.first - a[i]] = (new_even[p.first - a[i]] + p.second) % MOD;
        }
        
        dp_even = new_even;
        dp_odd = new_odd;
    }
    
    cout << (dp_even[0] + dp_odd[0]) % MOD << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while(t--) solve();
    
    return 0;
}