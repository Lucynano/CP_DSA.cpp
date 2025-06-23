#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, j = 0;
        bool b = false;

        cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i] == 1)
                j++;
            if(i > 0 && v[i - 1] == 0 && v[i] == 0) {
                b = true;
            }
        }

        if(b || j == n)
            cout << "YES\n";
        else
            cout << "NO\n";

    }
    return 0;
}