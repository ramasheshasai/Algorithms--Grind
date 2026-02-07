class Solution {
public:
    int minimumDeletions(string s) {
        int cntB = 0;   // counts 'b' before current index
        int del = 0;    // deletions needed

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'b') {
                cntB++;
            } else { // s[i] == 'a'
                if (cntB > 0) {
                    del++;
                    cntB--;  
                }
            }
        }
        return del;
    }
};
