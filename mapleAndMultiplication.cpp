#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b, res;
    cin >> a >> b;
    if(a == b) res = 0;
    else if(a % b == 0 || b % a == 0 || a == 1 || b == 1) res = 1;
    else res = 2;
    cout << res << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}