#include <bits/stdc++.h>

    int minDeletion(string s, int k) {
        // Etape 1 : Compter la frequence de chaque caractere
        unordered_map<char, int> freq_map;
        for (char c : s) {
            freq_map[c]++;
        }

        // Etape 2 : Si le nombre de caracteres distincts est deja <= k, pas besoin de suppression
        if (freq_map.size() <= k) {
            return 0;
        }

        // Etape 3 : Extraire les frequences dans un vecteur
        vector<int> freq_list;
        freq_list.reserve(freq_map.size()); // optimisation memoire
        for (const auto& entry : freq_map) {
            freq_list.push_back(entry.second);
        }

        // Etape 4 : Trier les frequences par ordre croissant
        sort(freq_list.begin(), freq_list.end());

        // Etape 5 : Supprimer les caracteres les moins frequents jusqu'a avoir k distincts
        int total_deletions = 0;
        int num_to_remove = freq_map.size() - k;
        for (int i = 0; i < num_to_remove; ++i) {
            total_deletions += freq_list[i]; // supprimer tous les caracteres de cette frequence
        }

        return total_deletions;
    }
