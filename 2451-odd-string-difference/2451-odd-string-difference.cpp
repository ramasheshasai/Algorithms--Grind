class Solution {
public:
    vector<int> getDiff(string s) {
        vector<int> diff;
        for (int i = 0; i < s.size() - 1; i++) {
            diff.push_back((s[i+1] - 'a') - (s[i] - 'a'));
        }
        return diff;
    }

    string oddString(vector<string>& words) {
        vector<int> d0 = getDiff(words[0]);
        vector<int> d1 = getDiff(words[1]);
        vector<int> d2 = getDiff(words[2]);

        vector<int> common;
        if (d0 == d1)
            common = d0;
        else if (d0 == d2)
            common = d0;
        else
            common = d1;

        for (int i = 0; i < words.size(); i++) {
            if (getDiff(words[i]) != common)
                return words[i];
        }
        return "";
    }
};
