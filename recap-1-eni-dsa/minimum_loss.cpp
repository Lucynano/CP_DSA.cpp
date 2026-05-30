// 50% of Max Score Valid

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'minimumLoss' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts LONG_INTEGER_ARRAY price as parameter.
 */

// BRUTE FORCE APPROCHE O(n2)
// int minimumLoss(vector<long> price) {
//     int minLoss = INT_MAX;
    
//     for(int i = 0; i < price.size(); i++) {
//         for(int j = i + 1; j < price.size(); j++) {
//             if(price[i] - price[j] >= 0 && minLoss > price[i] - price[j])
//                 minLoss = price[i] - price[j];
//         }
//     }
    
//     return minLoss;
// }

// O(n log n)
int minimumLoss(vector<long> price) {
    int minLoss = INT_MAX;
    int n = price.size();
    vector<pair<int, int>> v;
    
    for(int i = 0; i < n; i++) {
        v.push_back({price[i], i});
    }
    
    sort(v.begin(), v.end());
    
    for(int i = 1; i < n; i++) {
        if(v[i].second - v[i - 1].second < 0) {
            minLoss = min(minLoss, v[i].first - v[i - 1].first);
        }
    }
    
    return minLoss;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string price_temp_temp;
    getline(cin, price_temp_temp);

    vector<string> price_temp = split(rtrim(price_temp_temp));

    vector<long> price(n);

    for (int i = 0; i < n; i++) {
        long price_item = stol(price_temp[i]);

        price[i] = price_item;
    }

    int result = minimumLoss(price);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
