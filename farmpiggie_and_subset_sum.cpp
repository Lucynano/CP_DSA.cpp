#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    for(int i = n; i > 0; i--)
        cout << i << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while(t--) solve();

    return 0;
}