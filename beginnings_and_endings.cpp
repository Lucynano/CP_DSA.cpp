#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    
    int minNbrAdjSwaps = 100;
    bool impossible = true;
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(v[i] == v[j]) {
                impossible = false;
                minNbrAdjSwaps = min(minNbrAdjSwaps, i + n - j - 1);
            }
        }
    }
    
    cout << (impossible ? -1 : minNbrAdjSwaps) << "\n"; 
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	while(t--) solve();
	
	return 0;
}
