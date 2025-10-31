#define ll long long

class Solution {
public:
    long long countStableSubarrays(vector<int>& capacity) {
        int n = capacity.size();
        
        // Prefix sums
        vector<ll> p(n);
        p[0] = capacity[0];
        for(int i = 1; i < n; i++) p[i] = p[i-1] + capacity[i];
        
        // nested um for frequence: mpp[capacity][prefix_sum]
        unordered_map<int, unordered_map<ll, int>> mpp;
        
        ll count = 0;

        for(int r = 2; r < n; r++) {
            int l = r - 2;

            mpp[capacity[l]][p[l]]++;

            ll target = p[r - 1] - capacity[r];

            // Find the capacity[r] key
            auto itVal = mpp.find(capacity[r]);
            if(itVal != mpp.end()) {
                auto &inner = itVal->second;

                // Find  (capacity[l], p[l])
                auto itPref = inner.find(target);
                if(itPref != inner.end()) count += itPref->second;
            }    
        }
        return count;
    }
};