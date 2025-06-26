#include <bits/stdc++.h>

using namespace std;

bool comp(const pair<string, int>& a, const pair<string, int>& b) {
    bool isBetter = false;
    int countA = __builtin_popcount(a.second);
    int countB = __builtin_popcount(b.second);

    if(countA != countB) return countA > countB;
    
    return a.first < b.first;
}

int main() {
    int r;
    cin >> r; 

    map<string, int> mapTotalScores;
    string name, score;

    while(r--) {

        cin >> name >> score;

        if(score != "NOTHING") mapTotalScores[name] += stoi(score);
        else mapTotalScores[name] += 0;

    }

    vector<pair<string, int>> vTotalScores(mapTotalScores.begin(), mapTotalScores.end());
    
    sort(vTotalScores.begin(), vTotalScores.end(), comp);

    int i = 1;

    for(auto totalScore : vTotalScores) {
        cout << i << "- " << totalScore.first << " : " << totalScore.second << "\n";
        i++;
    }

    return 0;
}