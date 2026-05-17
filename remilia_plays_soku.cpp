#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    ll n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;

    ll distance = min(abs(x1 - x2), n - abs(x1 - x2));
 
    ll nbrOfSec = distance;

    if(n > 3) 
        nbrOfSec += k;

    cout << nbrOfSec << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) 
        solve();

    return 0;
}