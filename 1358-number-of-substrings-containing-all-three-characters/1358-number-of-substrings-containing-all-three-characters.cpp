class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        unordered_map<char, int> freq;
        int l = 0;
        int count = 0;

        for (int r = 0; r < n; r++) {
            freq[s[r]]++;

            while (freq['a'] > 0 && freq['b'] > 0 && freq['c'] > 0) {
                count += (n - r);
                freq[s[l]]--;
                l++;
            }
        }
        return count;
    }
};
