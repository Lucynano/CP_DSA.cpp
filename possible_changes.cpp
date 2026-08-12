#include <bits/stdc++.h>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> possibleChanges(vector<string> usernames) {
    vector<string> res;

    for(long i = 0; i < usernames.size(); i++) {
        bool possible = false;

        for(long j = 1; j < usernames[i].length(); j++) {
            if(usernames[i][j - 1] > usernames[i][j]) {
                possible = true;
                break;
            }
        }

        if(possible) res.push_back("YES");
        else res.push_back("NO");
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long n; cin >> n;

    vector<string> usernames(n);
    for(long i = 0; i < n; i++) cin >> usernames[i];

    vector<string> res = possibleChanges(usernames);

    for(auto& s : res) cout << s << "\n";

    return 0;
}