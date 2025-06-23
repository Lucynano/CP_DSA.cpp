#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, p, q;
        cin >> n >> m >> p >> q;
        
        bool possible;
        if (p == n) {
            possible = (m == q);
        } else if (p == 1) {
            possible = (m == n * q);
        } else if (n % p == 0) {
            possible = (m == (n / p) * q);
        } else {
            possible = true;
        }
        
        cout << (possible ? "YES" : "NO") << endl;
    }
}

int main() {
    solve();
    return 0;
}
