#include <bits/stdc++.h>

using namespace std;

bool onlyOne(vector<vector<string>> groups, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 4; j++) {
            for(int k = i; k < n; k++) {
                for(int l = j + 1; l < 4; l++) {
                    if(groups[i][j] == groups[k][l]) return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    int n; 

    cin >> n;

    vector<vector<string>> groups(n);

    for (int i = 0; i < n; i++) {

        groups[i].resize(4);

        for (int j = 0; j < 4; j++) {
            cin >> groups[i][j];
        }
    }
    
    cout << (onlyOne(groups, n) ? "YES" : "NOT") << "\n";

    return 0;
}

// Alternative

// #include <iostream>
// #include <unordered_set>
// #include <string>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     unordered_set<string> teams;
//     bool duplicate = false;

//     for (int i = 0; i < n * 4; ++i) {
//         string team;
//         cin >> team;
//         if (teams.count(team)) {
//             duplicate = true;
//         }
//         teams.insert(team);
//     }

//     cout << (duplicate ? "NOT" : "YES") << endl;
//     return 0;
// }

