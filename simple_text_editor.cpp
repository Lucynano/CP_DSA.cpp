#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int q; cin >> q;
    cin.ignore();
    
    string s;

    vector<string> prevS;
    
    while(q--) {
        string ops; getline(cin, ops);
        
        char t = ops[0];
        string arg = ops.substr(ops.find(' ') + 1);
                        
        switch(t) {
            case '1':
                prevS.push_back(s);
                s += arg;
                break;
            case '2':
                prevS.push_back(s);
                s.erase(s.length() - stoi(arg));
                break;
            case '3':
                cout << s[stoi(arg) - 1] << "\n";
                break;
            case '4':
                s = prevS.back();
                prevS.pop_back();
                break;
        }
    }
    
    return 0;
}
