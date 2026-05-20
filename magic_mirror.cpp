#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    
    int left = 1, right = n - 2, sumX1X2 = v[0] + v[n - 1];
    bool possible = true;
    
    
    while(left < right) {
        if(sumX1X2 != (v[left] + v[right])) {
            possible = false;
            break;
        }
        left++;
        right--;
    }
    
    cout << (possible ? "YES\n" : "NO\n");
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
