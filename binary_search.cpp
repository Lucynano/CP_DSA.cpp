#include <bits/stdc++.h>

using namespace std;

// an iterative binary search 
int iterative_search(vector<int>& v, int low, int high, int x) {
    int mid;
    // <=: car dans le cas ou v = {3} et x = 3
    while(low <= high) {
        mid = low + ((high - low) / 2); // milieu de la partie a rechercher
        if(v.at(mid) < x) // si x est sup alors ignorer la partie inferieur
            low = mid + 1;
        else if(v.at(mid) > x) // si x est inf alors ignorer la partie superieur
            high = mid - 1;
        else // x est trouve
            return mid;
    }
    return -1; // si x n est pas present
}

int recursive_search(vector<int>& v, int low, int high, int x) {
    if(low <= high) {
        int mid = low + ((high - low)/ 2);
        if(v.at(mid) < x)
            return recursive_search(v, mid + 1, high, x);
        else if(v.at(mid) > x)
            return recursive_search(v, low, mid - 1, x);
        else
            return mid;
    } else
        return -1;
}

int main() {
    vector<int> v = {-3, -1, 0, 3, 7, 11, 13, 16, 34};
    int res = recursive_search(v, 0, (v.size() - 1), 34);
    cout << ((res == -1) ? "NO" : "YES") << "\n";
    return 0;
}