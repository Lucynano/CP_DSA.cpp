/*
    Competitive Programmer’s Handbook:

        Merge sort sorts a subarray array[a . . . b] as follows:
            1. If a = b, do not do anything, 
            because the subarray is already sorted.

            2. Calculate the position of the middle element: 
            k = (a + b)/2.

            3. Recursively sort the subarray array[a . . . k].

            4. Recursively sort the subarray array[k + 1 . . . b].

            5. Merge the sorted subarrays array[a . . . k] 
            and array[k + 1 . . . b] into a sorted subarray array[a . . . b].

*/ 

#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &array, int a, int k, int b) {
    vector<int> temp;

    int i = a;
    int j = k + 1;

    while(i <= k && j <= b) {
        if(array[i] <= array[j]) {
            temp.push_back(array[i]);
            i++;
        } else {
            temp.push_back(array[j]);
            j++;
        }
    }

    while(i <= k) {
        temp.push_back(array[i]);
        i++;
    }

    while(j <= b) {
        temp.push_back(array[j]);
        j++;
    }

    for(int i = 0; i < temp.size(); i++) {
        array[i + a] = temp[i];
    }
}

void mergeSort(vector<int> &array, int a, int b) {
    int k = (a + b) / 2;

    if(a == b) return;
    
    mergeSort(array, a, k);
    mergeSort(array, k + 1, b);

    merge(array, a, k, b);
}

int main() {
    int n;
    cin >> n;

    vector<int> array(n);
    for(int i = 0; i < n; i++) cin >> array[i];

    mergeSort(array, 0, n - 1);

    for(const auto &i : array) cout << i << " ";

    cout << "\n";

    return 0;
}