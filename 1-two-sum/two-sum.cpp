class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        // Single pass approach
        for (int i = 0; i < nums.size(); ++i ){
            int lookup = target - nums[i];
            auto it = mp.find(lookup);
            if (it != mp.end()) return {i, it -> second};
            mp[nums[i]] = i;
        } 
        return {};
    }
};