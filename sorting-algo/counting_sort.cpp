#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> countingSort(const vector<int>& v) {
    int n = v.size();
    int maxElem = *max_element(v.begin(), v.end());

    vector<int> count(maxElem + 1, 0);
    // Store the count of each unique elem of v at their respective indices
    // 0 in v: 2, 1 in v: 0, ..., i in v: count[i] 
    for(int i = 0; i < n; i++) count[v[i]]++;
    
    // Store the cumulative sum or prefix sum of the elem of count 
    // count[i] = count[i - 1] + count[i]
    for(int i = 1; i < count.size(); i++) count[i] += count[i - 1];

    vector<int> ans(n);
    // Decrement count[v[i]] and update ans[v[i]] = v[i]
    // Traverse v in reverse to maintain the order of equal elem, ensuring the sort remains stable
    for(int i = n - 1; i >= 0; i--) {
        count[v[i]]--;
        ans[count[v[i]]] = v[i];
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> ans = countingSort(v);

    for(const auto &i : ans) cout << i << " ";

    return 0;
}