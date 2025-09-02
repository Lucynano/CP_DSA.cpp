#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> um;
            for(int i = 0; i < nums.size(); ++i) {
                int x = target - nums[i];
                if(um.find(x) == um.end()) {
                    um.insert({nums[i], i});
                } else {
                    return {um[x], i};
                }
            }
            return {};
        }
};

int main() {
    return 0;
}
