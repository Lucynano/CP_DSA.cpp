#include <iostream>
#include <unordered_map>

using namespace std;

void solve() {
    int n; // size of the board (n x n)
    cin >> n;

    int j; // the color of candies on the board
    unordered_map<int, int> a; 
    bool rearrangementExists = true;

    for(int i = 0; i < n; i++) {
        for(int k = 0; k < n; k++) {
            cin >> j;
            a[j]++;
        }
    }

    for(auto it = a.begin(); it != a.end(); it++) {
        if(it->second > n * (n - 1)) {
            rearrangementExists = false;
            break;
        }
    }

    if(rearrangementExists) cout << "YES\n" ;
    else cout << "NO\n";
}

int main() {
    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}