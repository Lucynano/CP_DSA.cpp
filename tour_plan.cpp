#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int x, y, z;
	cin >> x >> y >> z;
	
	if(z <= 50) cout << x << "\n";
	else {
	    cout << x + ((z - 50) * y) << "\n";
	}
	
	return 0;
}
