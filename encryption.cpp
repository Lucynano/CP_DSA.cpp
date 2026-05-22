#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {    
    // Remove spaces
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    
    double l = s.length();
    
    // column
    int col = ceil(sqrt(l));
    
    string encryptedString;
    
    for(int i = 0; i < col; i++) {  
        for(int j = i; j < l; j += col) encryptedString += s[j];
        
        if(i < col - 1) encryptedString += " ";
    }
        
    return encryptedString;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
