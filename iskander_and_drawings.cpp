#include <algorithm>
#include <ios>
#include <iostream>
using namespace std;

void solve() {
    int n; cin >> n;
    
    string s; cin >> s;

    int count = 0, maxLen = 0;

    for(const auto &c : s) {
        if(c == '#') {
            count++;
            maxLen = max(maxLen, count);
        } else count = 0;
    }

    cout << (maxLen + 1) / 2 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while(t--) solve();

    return 0;
}