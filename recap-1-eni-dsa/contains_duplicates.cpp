#include <cmath>
#include <cstdio>
#include <iostream>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    unordered_map<int, int> um;
    int x;
    bool duplicate = false;

    
    for(int i = 0; i < n; i++) {
        cin >> x;
        um[x]++;
        if(um[x] > 1) duplicate = true;
    }
    
    cout << (duplicate ? "true\n" : "false\n");
    
    return 0;
}
