#include <bits/stdc++.h>

using namespace std;

void swapTwoElem(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(vector<int>& v) {
    int n = v.size();

    for(int current = 0; current < n - 1; current++) {
        int minIndex = current;

        for(int i = current + 1; i < n; i++) {
            if(v[i] < v[minIndex]) minIndex = i;
        }

        swapTwoElem(v[current], v[minIndex]);
    }
}

int main() {
    vector<int> v = {64, 25, 12, 22, 11};
    for(int& x : v) cout << x << " ";
    cout << "\n";

    selectionSort(v);
    for(int& x : v) cout << x << " ";
    cout << "\n";

    return 0;

}