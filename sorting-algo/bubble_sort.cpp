#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& v) {
    int n = v.size();
    bool swapped;

    for(int i = 0; i < n; i++) {
        swapped = false;

        for(int j = 1; j < n; j++) {
            if(v[j - 1] > v[j]) {
                int temp = v[j - 1];
                v[j - 1] = v[j];
                v[j] = temp;
                swapped = true;
            }
        }

        if(!swapped) break;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    bubbleSort(v);

    for(const auto &i : v) {
        cout << i << " ";
    }
    
    return 0;
}