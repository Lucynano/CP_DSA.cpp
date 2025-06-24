#include <bits/stdc++.h>
using namespace std;

bool est1erGp(const string& verbe) { 
    return verbe.substr(verbe.size() - 2) == "er" && verbe != "aller";
}

string toUpper(const string& s) {
    string res = s;
    transform(res.begin(), res.end(), res.begin(), ::toupper);
    return res;
}

bool commenceParVoyelle(const string& s) {
    return !s.empty() && string("aeiou").find(tolower(s[0])) != string::npos;
}

int main() {
    int n;
    cin >> n; cin.ignore();

    vector<string> verbes(n);

    for (int i = 0; i < n; i++) {
        getline(cin, verbes[i]);
    }

    bool no1erGp = true;

    for (const string& verbe : verbes) {
        if (!est1erGp(verbe)) continue;

        bool estPronominal = verbe.substr(0, 3) == "se " || verbe.substr(0, 3) == "s\' ";

        string radical;
        
        // apres "se " ou "s\' "
        (estPronominal ? radical = verbe.substr(3) : radical = verbe); 

        // Supprimer "er"
        radical = radical.substr(0, radical.size() - 2);

        // Gestion "el" => "ll", "et" => "tt"
        string ajoutRadical = "";
        string fin = radical.substr(max(0, (int)radical.size() - 2));
        if(fin == "el") ajoutRadical = "l";
        else if(fin == "et") ajoutRadical = "t";

        // Pour affichage pronom reflechi
        string pronom = (verbe.substr(0, 3) == "s\' ") ? "\' " : "e ";

        cout << toUpper(verbe) << "\n";

        // Conjugaisons
        string sujetJe;
        if(estPronominal) sujetJe = commenceParVoyelle(radical) ? "Je m' " : "Je m" + pronom;
        else sujetJe = commenceParVoyelle(radical) ? "J'" : "Je ";
        
        cout << sujetJe << radical << (ajoutRadical.empty() ? "e" : ajoutRadical + "e") << "\n";

        cout << (estPronominal ? "Tu t" + pronom : "Tu ") << radical << (ajoutRadical.empty() ? "es" : ajoutRadical + "es") << "\n";
        cout << (estPronominal ? "Il s" + pronom : "Il ") << radical << (ajoutRadical.empty() ? "e" : ajoutRadical + "e") << "\n";
        cout << (estPronominal ? "Nous nous " : "Nous ") << radical << (radical.back() == 'g' ? "eons" : "ons") << "\n";
        cout << (estPronominal ? "Vous vous " : "Vous ") << radical << "ez" << "\n";
        cout << (estPronominal ? "Ils s" + pronom : "Ils ") << radical << (ajoutRadical.empty() ? "ent" : ajoutRadical + "ent") << "\n";

        no1erGp = false;
    }

    if (no1erGp) cout << "NONE\n";

    return 0;
}
