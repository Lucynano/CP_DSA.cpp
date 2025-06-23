#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Obtenez plus de points en conjuguant correctement les verbes
    int n;
    cin >> n;

    vector<string> verbes(n);

    bool noVerb1ergp = true;

    for(int i = 0; i < n; i++) 
        cin >> verbes[i];

    for(int i = 0; i < n; i++) {
        if(verbes[i].back() == 'r' && verbes[i][verbes[i].size() - 2] == 'e') {
            string verbe = verbes[i];
            transform(verbe.begin(), verbe.end(), verbe.begin(), ::toupper);
            cout << verbe << "\n";
            if(verbes[i][verbes[i].size() - 4] == 'e' && verbes[i][verbes[i].size() - 3] == 'l') {
                verbes[i].pop_back();
                verbes[i].pop_back();
                cout << "Je " << verbes[i] << "le" << "\n";
                cout << "Tu " << verbes[i] << "les" << "\n";
                cout << "Il " << verbes[i] << "le" << "\n";
                cout << "Nous " << verbes[i] << "ons" << "\n";
                cout << "Vous " << verbes[i] << "ez" << "\n";
                cout << "Ils " << verbes[i] << "lent" << "\n";
            } else if(verbes[i][verbes[i].size() - 3] == 'y') {
                verbes[i].pop_back();
                verbes[i].pop_back();
                verbes[i].pop_back();
                cout << "Je " << verbes[i] << "ie" << "\n";
                cout << "Tu " << verbes[i] << "ies" << "\n";
                cout << "Il " << verbes[i] << "ie" << "\n";
                cout << "Nous " << verbes[i] << "yons" << "\n";
                cout << "Vous " << verbes[i] << "yez" << "\n";
                cout << "Ils " << verbes[i] << "ient" << "\n";

            } else {
                verbes[i].pop_back();
                verbes[i].pop_back();
                cout << "Je " << verbes[i] << "e" << "\n";
                cout << "Tu " << verbes[i] << "es" << "\n";
                cout << "Il " << verbes[i] << "e" << "\n";
                if(verbes[i].back() == 'g')  cout << "Nous " << verbes[i] << "eons" << "\n";
                else  cout << "Nous " << verbes[i] << "ons" << "\n";
                cout << "Vous " << verbes[i] << "ez" << "\n";
                cout << "Ils " << verbes[i] << "ent" << "\n";
            }

            noVerb1ergp = false;
        } 
    }

    if(noVerb1ergp) cout << "NONE" << "\n";


    return 0;
}
