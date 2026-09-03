#include <algorithm>
#include <iostream>
#include <stdexcept>

using namespace std;

/**
 * Determines the optimal combination of cakes from two recipes that maximizes
 * total cakes and minimizes waste.
 *
 * Recipe 1: 100 flour, 50 sugar, 20 eggs
 * Recipe 2: 50 flour, 100 sugar, 30 eggs
 *
 * @param flour An integer larger than 0 specifying the amount of available flour.
 * @param sugar An integer larger than 0 specifying the amount of available sugar.
 * @param eggs An integer larger than 0 specifying the amount of available eggs.
 * @return An integer representing the total waste (sum of leftover ingredients)
 * @throws invalid_argument If inputs are not positive.
 */
int optimal_cakes(int flour, int sugar, int eggs) {
    // Validate inputs
    if (flour <= 0 || sugar <= 0 || eggs <= 0) {
        throw invalid_argument("All inputs must be positive integers.");
    }

    // WRITE YOUR CODE HERE
    int totalWaste = flour + sugar + eggs;

    int maxR1 = min({flour / 100, sugar / 50, eggs / 20});

    for(int i = 0; i <= maxR1; i++) {
        int remainingFlour = flour - (100 * i);
        int remainingSugar = sugar - (50 * i);
        int remainingEggs = eggs - (20 * i);

        int maxR2 = min({remainingFlour / 50, remainingSugar / 100, remainingEggs / 30});

        remainingFlour -= (50 * maxR2);
        remainingSugar -= (100 * maxR2);
        remainingEggs -= (30 * maxR2);

        int waste = remainingFlour + remainingSugar + remainingEggs;

        totalWaste = min(totalWaste, waste);
    }

    return totalWaste; // Replace with actual result
}

// --- Main execution block. DO NOT MODIFY ---
int main() {
    try {
        int flour, sugar, eggs;

        // Read input from stdin
        if (!(cin >> flour)) {
            cerr << "Error: Invalid input for flour." << endl;
            return 1;
        }
        if (!(cin >> sugar)) {
            cerr << "Error: Invalid input for sugar." << endl;
            return 1;
        }
        if (!(cin >> eggs)) {
            cerr << "Error: Invalid input for eggs." << endl;
            return 1;
        }

        // Call the optimal_cakes function
        int result = optimal_cakes(flour, sugar, eggs);

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