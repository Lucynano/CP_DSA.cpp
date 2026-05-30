#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    
    long long res = k + (k - 1) / (n - 1);
    
    cout << res << "\n";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--)
        solve();
    
    return 0;
}
