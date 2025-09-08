#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, intru;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i < n; ++i) cin >> v[i];
    for(int i = 0; i < n; ++i) {
        if(n > 3 && v[0] != v[i] && v[0] != v[i + 1]) intru = 1;
        else if(v[0] != v[i]) intru = i + 1;
    }
    cout << intru << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}