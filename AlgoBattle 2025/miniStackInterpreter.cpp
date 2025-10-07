#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n; cin.ignore();

    vector<int> stack;

    while(n--) {
        string command;

        getline(cin, command);
        
        stringstream ss(command);

        string op;
        
        ss >> op;

        int x;

        if(op == "PUSH" && ss >> x) {
            stack.push_back(x);
        } else if(op == "POP" && !stack.empty()) {
            stack.pop_back();
        } else if((op == "ADD" || op == "SUB") && stack.size() >= 2) {
            int a = stack.back(); stack.pop_back();
            int b = stack.back(); stack.pop_back();
            stack.push_back((op == "ADD") ? (a + b) : (b - a));
        } else if(op == "PRINT" && !stack.empty()) {
            cout << stack.back() << "\n";
        } else {
            cout << "Error\n";
            break;
        }
    }

    return 0;
}