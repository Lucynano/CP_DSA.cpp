#include<bits/stdc++.h>

using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    unordered_map<string, int> freq;
    vector<int> res;

    for(const string &s : stringList) freq[s]++;

    for(const string &q : queries) res.push_back(freq[q]);

    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q; cin.ignore();

    vector<string> stringList(n), queries(q);
    for(int i = 0; i < n; i++) getline(cin, stringList[i]);
    for(int i = 0; i < q; i++) getline(cin, queries[i]);

    vector<int> res = matchingStrings(stringList, queries);

    for(const int &i : res) 
        cout << i << "\n";
    
    return 0;
}