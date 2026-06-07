class Solution {
public:

    bool areAnagrams(string a, string b) {
        if (a.length() == b.length()) {
            int count[26] = {};
            for (char c : a) count[c - 'a'] += 1;
            for (char c : b) count[c - 'a'] -= 1;
            for (int c : count) {
                if (c != 0) return false;
            }
            return true;

        }
        return false;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        vector<pair<string, bool>> copy;
        for (auto s : strs) {
            pair<string, bool> add{s, false};
            copy.push_back(add);
        }

        for (int i = 0; i < strs.size(); ++i) {
            if (copy[i].second == true) continue;
            vector<string> add {strs[i]};
            copy[i].second = true;
            bool flag = false;
            for (int x = i + 1; x < strs.size(); ++x) {
                if (areAnagrams(strs[i], strs[x]) && copy[x].second == false) {
                    add.push_back(strs[x]);
                    copy[x].second = true;
                    flag = true;
                } 
            }
            result.push_back(add);
        }
        return result;
    }
};