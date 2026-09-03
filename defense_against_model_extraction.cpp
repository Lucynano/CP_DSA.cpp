#include <iostream>
#include <vector>
#include <sstream>
#include <stdexcept>

using namespace std;

/**
 * Determines the minimum information leaked while keeping trust above 0.
 *
 * @param query_volumes A vector of integers representing information that would leak at each time period if no defense is applied
 * @param initial_trust An integer representing the starting user trust score
 * @param max_trust An integer representing the maximum possible trust score
 * @return An integer representing the minimum information that must be leaked
 * @throws invalid_argument If inputs are invalid.
 */
int minimize_extraction(vector<int>& query_volumes, int initial_trust, int max_trust) {
    // Validate inputs
    if (query_volumes.empty() || initial_trust <= 0 || max_trust <= 0) {
        throw invalid_argument("Invalid input values.");
    }

    // WRITE YOUR CODE HERE
    int minInfo = 0, trust = initial_trust;
    
    query_volumes.push_back(0);

    for(int i = 1; i < query_volumes.size(); i++) {
        if(query_volumes[i - 1] + query_volumes[i] >= trust and trust * 2 <= max_trust) {
            trust *= 2;
            minInfo += query_volumes[i - 1];
        } else {
            trust -= query_volumes[i - 1];
        }
    }

    return minInfo; // Replace with actual result
}

// --- Main execution block. DO NOT MODIFY ---
int main() {
    try {
        string line;
        vector<int> query_volumes;
        int initial_trust, max_trust;

        // Read query_volumes from stdin
        if (!getline(cin, line)) {
            cerr << "Error: Could not read query_volumes." << endl;
            return 1;
        }
        istringstream iss(line);
        int value;
        while (iss >> value) {
            query_volumes.push_back(value);
        }

        // Read initial_trust
        if (!(cin >> initial_trust)) {
            cerr << "Error: Invalid input for initial_trust." << endl;
            return 1;
        }

        // Read max_trust
        if (!(cin >> max_trust)) {
            cerr << "Error: Invalid input for max_trust." << endl;
            return 1;
        }

        // Call the minimize_extraction function
        int result = minimize_extraction(query_volumes, initial_trust, max_trust);

        // Print the result to stdout
        cout << result << endl;

    } catch (const invalid_argument& e) {
        cerr << "Input Error or Validation Failed: " << e.what() << endl;
        return 1;
    } catch (const exception& e) {
        cerr << "An unexpected error occurred: " << e.what() << endl;
        return 1;
    }

    return 0;
}