class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        int freq_count_t[26] = {};
        int freq_count_s[26] = {};

        for (int i = 0; i < s.size(); ++i) {
            freq_count_t[s[i]-97]++;
            freq_count_s[t[i]-97]++;

        }

        for (int i = 0; i < 26; ++i) {
            if (freq_count_t[i] != freq_count_s[i]) return false;
        }

        return true;

    }
};