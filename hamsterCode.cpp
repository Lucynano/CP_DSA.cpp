#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'HamsterMe' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING codeM
 *  2. STRING messageM
 */

string HamsterMe(string codeM, string messageM) {
    // Ecrivez votre code ici
    string res;
    sort(codeM.begin(), codeM.end());
    for(char c : messageM) {
        bool found = false;

        for(int i = 0; i < codeM.size(); i++) {
            if(c >= codeM[i] && c < codeM[i + 1]) {
                res += codeM[i];
                res += to_string(int(c) - int(codeM[i]) + 1);
                found = true;
                break;
            }
        }
        if(!found) {
            char last = codeM.back();
            res += last;
            res += to_string(int(last) - int(c) + 1);
        }
    }

    return res;
}

int main()
{

    string code;
    getline(cin, code);

    string message;
    getline(cin, message);

    string result = HamsterMe(code, message);

    cout << result << "\n";

    return 0;
}
