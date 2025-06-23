#include <bits/stdc++.h>

using namespace std;

void watermelonDivide(int w) {
    if((w > 2) && (w % 2 == 0))
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main() {
    int w;
    cin >> w;
    watermelonDivide(w);
    return 0;
}