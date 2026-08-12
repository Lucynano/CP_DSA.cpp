#include <bits/stdc++.h>

using namespace std;

typedef long long ll; 

ll pgcd(ll a, ll b) {
    ll g = min(a, b);

    while(g > 1) {
        if(a % g == 0 and b % g == 0) return g;
        g--;
    }

    return 1;
}

ll nearlySimilarRectangles(vector<vector<ll>> sides) {
    unordered_map<string, ll> um;
    ll count = 0;

    for(ll i = 0; i < sides.size(); i++) {
        ll a = sides[i][0], b = sides[i][1], g = pgcd(a, b);
        
        a /= g;
        b /= g;

        string keyStr = to_string(a) + "/" + to_string(b);

        count += um[keyStr];
        um[keyStr]++;
    }

    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, cols; cin >> n >> cols;
    vector<vector<ll>> sides(n, vector<ll>(2));

    for(ll i = 0; i < n; i++) cin >> sides[i][0] >> sides[i][1];

    cout << nearlySimilarRectangles(sides) << "\n";

    return 0;
}