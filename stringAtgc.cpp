#include <iostream>
#include <string>

using namespace std;

string stringAtgc(const string& s) {
    string res;
    for(char c : s) {
        switch(c) {
            case 'A':
                res += "AA";
                break;
            case 'T':
                res += "TTT";
                break;
            case 'C':
                res += 'C';
                break;
            default:
                break;
        }
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << stringAtgc(s) << "\n";
    return 0;
}