class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size();
        int m = s.size();
        int ass = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0;
        int j = 0;
        while(i<n && j<m){
            if(s[j] >= g[i]){
                ass++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return ass;
    }
};