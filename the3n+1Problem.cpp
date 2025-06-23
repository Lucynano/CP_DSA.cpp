// Collatz conjecture

#include <bits/stdc++.h>

using namespace std;

#define MAX 1000000

// Utilisation de memoisation
int memo[MAX] = {0}; // Initialiser en 0

int cycleLength(long long n) {

    if(n < MAX && memo[n] != 0) return memo[n];

    int length;

    if(n == 1) length = 1;
    else if(n % 2 == 0) length = 1 + cycleLength(n / 2);
    else length = 1 + cycleLength((n * 3) + 1);

    if(n < MAX) memo[n] = length; // stock le resultat

    return length;
}

int main() {
    int i, j;
    cin >> i >> j; cin.ignore();
    int maxCycleLength = 0;
    for(int k = i; k <= j; k++) {
        maxCycleLength = max(maxCycleLength, cycleLength(k));
    }
    cout << i << " " << j << " "<< maxCycleLength << "\n";
    return 0;
}

// Approche naive
// int maxCycleLength(int i, int j) {
//     int maxCycLen = 0, cycLen, n;
//     for(int k = i; k <= j; k++) {
//         cycLen = 0;
//         n = k;

//         here:
//         cycLen++;

//         if(n == 1) {
//             maxCycLen = max(maxCycLen, cycLen);
//             continue;
//         }

//         if(n % 2 == 0) 
//             n /= 2;
//         else
//             n = (n * 3) + 1;
                
//         goto here;
//     }
//     return maxCycLen;
// }