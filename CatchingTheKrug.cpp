// Not correct

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, rk, ck, rd, cd;
    cin >> n >> rk >> ck >> rd >> cd; 
    if(rk > rd) cout << n - rd;
    else if(ck > cd) cout << n - cd;
    else if(rk <= rd && ck <= cd) cout << cd;
    
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}