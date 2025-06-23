#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--) {
        int n, x;
        bool canReach = true;

        cin >> n >> x;

        vector<int> v(n);

        for(int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        int i = 0; 

        while(v.at(i) != 1) {
            i++;
        } 

        while(i < v.size()) {
            if(v.at(i) == 1 && x == 0) {
                canReach = false;
                break;
            }

            if(x > 0) x--;

            i++;
        }

        cout << (canReach ? "YES" : "NO") << "\n";
    }

    return 0;
}