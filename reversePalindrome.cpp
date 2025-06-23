#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    string s1;
    int l = s.size();
    for(int i = 0, j = l - 1; i < l && j >= 0; i++, j--) {
        if(i > j)
            break;
        if(s.at(i) == s.at(j))
            s1 += s.at(i);
    }
    cout << s1 << "\n";
    return 0;
}