#include <bits/stdc++.h>

using namespace std;

// string bitstring(int n, int k) {
//     string s(n, '0');
//     if(n == k) s.replace(s.begin(), s.end(), n, '1');
//     else if(k > 0) {
//         int left = 0, right = s.size() - 1;
//         char bit;
//         while(left <= right) {
//             if((left % 2 != 0 && k > 0) || k == 0) bit = '0';
//             else {
//                 bit = '1';
//                 k--;
//             }
//             s.replace(left, 1, 1, bit);
//             if(left == right) break;
//             if(bit == '1' || k == 0) bit = '0';
//             else {
//                 bit = '1';
//                 k--;
//             } 
//             s.replace(right, 1, 1, bit);
//             left++;
//             right--;
//         }
//     }
//     return s;
// }

string bitstring(int n, int k) {
    return string(k, '1') + string(n - k, '0');
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        cout << bitstring(n, k) << "\n";
    }
    return 0;
}