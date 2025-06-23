#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(vector<int> arr) {
    auto miniMax = minmax_element(arr.begin(), arr.end());
    unsigned int sum = accumulate(arr.begin(), arr.end(), 0);
    cout << sum - *miniMax.second << " " << sum - *miniMax.first;
}
