#include <bits/stdc++.h>

#define REP(i, a, b) for(int i=a; i<b; i++)

using namespace std;

typedef vector<int> vi;

vi conwaySequence(const vi& v1);

int main() {
    int r;
    cin >> r; cin.ignore();
    int l;
    cin >> l; cin.ignore();
    vi v = {r};
    REP(i, 1, l) {
        v = conwaySequence(v);
    }
    REP(i, 0, v.size()) { 
        cout << v.at(i);
        if(i<(v.size()-1)) 
            cout << " ";
    }
    cout << "\n";
    return 0;
}

vi conwaySequence(const vi& v1) {
    vi v2;
    for(size_t i=0; i<v1.size();) {
        int val = v1.at(i), len = 0;
        while(val==v1.at(i)) {
            len++;
            i++;
            if(i==v1.size())
                break;
        }
        v2.push_back(len);
        v2.push_back(val);
    }
    return v2;
}