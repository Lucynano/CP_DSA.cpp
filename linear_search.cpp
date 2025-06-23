#include <bits/stdc++.h>

using namespace std;

int search(const vector<int>& v, int x) {
    for(int i = 0; i < v.size(); i++)
        if(x==v.at(i))
            return i;
    return -1;
}

int main() {
    vector<int> v = {3, 6, 3, 7, 9, 10, 5, 25};
    int res = search(v, 24);
    cout << (res == -1 ? "NO" : "YES") << "\n";
    return 0;
}