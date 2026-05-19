#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    string s;
    cin >> x >> s;
    
    int carlsenPoints = 0, chefPoints = 0;
    int carlsenTotalPrize = x;
    
    for(const char &c : s) {
        if(c == 'C') {
            carlsenPoints += 2;
        } else if(c == 'N') {
            chefPoints += 2; 
        } else {
            carlsenPoints++;
            chefPoints++;
        }
    }
    
    if(carlsenPoints > chefPoints) carlsenTotalPrize *= 60;
    else if(carlsenPoints < chefPoints) carlsenTotalPrize *= 40;
    else carlsenTotalPrize *= 55;
    
    cout << carlsenTotalPrize << "\n";
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
