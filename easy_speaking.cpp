#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    
    bool isHardToPronounce = false;
    int nConsInRow = 0;
    
    for(const char &c : s) {
        if(c != 'a' and c != 'e' and c != 'i' and c != 'o' and c != 'u')
            nConsInRow++;
        else
            nConsInRow = 0;
            
        if(nConsInRow >= 4) {
            isHardToPronounce = true;
            break;
        }
    }
    
    cout << (isHardToPronounce ? "YES\n" : "NO\n");
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
