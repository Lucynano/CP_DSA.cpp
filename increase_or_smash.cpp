#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a;
    int ai;
    for(int i = 0; i < n; i++) {
        cin >> ai;
        auto it = find(a.begin(), a.end(), ai);
        if(it == a.end()) a.push_back(ai);
    }
    
    cout << (a.size() * 2) - 1 << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}