#include <bits/stdc++.h>

using namespace std;

void swapTwoElem(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void insertionSort(vector<int>& v) {
    int n = v.size();

    for(int current = 1; current < n; current++) {
        int i = current;

        while(i > 0 and v[i - 1] > v[i]) {
            swapTwoElem(v[i - 1], v[i]);
            i--;
        }
    }
}

int main() {
    vector<int> v = { 12, 11, 13, 5, 6 };
    for(int& x : v) cout << x << " ";
    cout << "\n";

    insertionSort(v);
    for(int& x : v) cout << x << " ";
    cout << "\n";

    return 0;
}