#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;

void solve() {
    int n; cin >> n;

    if(n == 2) cout << -1;
    else {
        long long a = 1;
        cout << a;
    
        for(int i = 2; i <= n; i++)
        {
            if(i == 2) a = 2;
            else if(i == 3) a = 3;
            else a *= 2;
    
            cout << " " << a;
        }
    }

    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while(t--) solve();
    return 0;
}