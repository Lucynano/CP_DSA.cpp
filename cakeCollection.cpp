#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    long long m;

    cin >> n >> m;

    vector<long long> v(n);

    for(int i = 0; i < n; ++i) cin >> v[i];

    long long sumCake = 0;
    long long k = min<long long>(n, m);

    sort(v.begin(), v.end());


    for(int i = 0; i < k; ++i) {
        sumCake += ((m - i) * v[n - 1 - i]);
    } 

    cout << sumCake << "\n";


}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}