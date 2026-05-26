class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); ++i) mp[nums[i]] = i;

        for (int i = 0; i < nums.size(); ++i) {
            int lookup = target - nums[i];
            auto it = mp.find(lookup);
            if (it != mp.end() && it -> second != i) {
                return {i, it -> second};
            }
        }

        // Won't reach this point
        return {0, 0};
    }
};