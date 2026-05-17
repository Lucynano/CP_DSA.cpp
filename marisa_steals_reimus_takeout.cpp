#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int sum0 = 0, sum1 = 0, sum2 = 0;

    for(int i = 0; i < n; ++i) {
        int w;
        cin >> w;

        if(w == 0) sum0++;
        else if(w == 1) sum1++;
        else sum2++;
    }

    int maxNbrOfOp = sum0 + min(sum1, sum2);

    int rest = abs(sum1 - sum2);

    maxNbrOfOp += (rest / 3);

    cout << maxNbrOfOp << "\n";
}

int main() {
    int t;
    cin >> t;

    while(t--) 
        solve();
    
    return 0;
}