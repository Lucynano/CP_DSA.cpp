#include <bits/stdc++.h>

using namespace std;

int maxShashliks(int k, int a, int b, int x, int y) {
    int type1, type2, tempRestant, maxPortions = 0;
    if(k >= a) {
        type1 = ((k - a) / x) + 1;
        tempRestant = k - (type1 * x);
        type2 = (tempRestant >= b ? ((tempRestant - b) / y) + 1 : 0);
        maxPortions = max(maxPortions, type1 + type2);
    }
    if(k >= b) {
        type2 = ((k - b) / y) + 1;
        tempRestant = k - (type2 * y);
        type1 = (tempRestant >= a ? ((tempRestant - a) / x) + 1 : 0);
        maxPortions = max(maxPortions, type1 + type2);
    }
    return maxPortions;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int k, a, b, x, y; // input
        cin >> k >> a >> b >> x >> y;
        cout <<  maxShashliks(k, a, b, x, y) << "\n";
    }
    return 0;
}