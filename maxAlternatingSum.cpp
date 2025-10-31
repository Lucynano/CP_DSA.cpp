class Solution {
    public:
        long long maxAlternatingSum(vector<int>& nums) {
            vector<long long> v;
            for(auto i : nums) v.push_back(i*i);
    
            sort(v.begin(), v.end());
    
            long long res = 0;
            int n = v.size();
            for(int i = 0; i < n / 2; i++) {
                res += v[n-1-i];
                res -= v[i];
            }
    
            if(n%2 == 1) res += v[n/2];
    
            return res;
        }
    };