class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result = "";
        for (string& word : words) {
            int weight = 0;
            for (char c : word) {
                weight += weights[c - 'a'];
            }
            result += (char)('z' - (weight % 26));
        }
        return result;
    }
};