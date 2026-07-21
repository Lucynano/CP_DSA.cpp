#include <ios>
#include <iostream>

#define ll long long

using namespace std;

void solve() {
    int n; cin >> n;
    ll prefix_sum = 0;
    bool isNeat = true;

    for(int i = 1; i <= n; i++) {
        ll a; cin >> a;
        prefix_sum += a;

        if(prefix_sum < (1LL * i * (i + 1) / 2)) isNeat = false;
    }

    if(isNeat)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while(t--) solve(); 

    return 0;
}