class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        int n = s.length();
        for(int i=0;i<n;i++){
            int ans2 = 'z'-s[i]+1;
            ans = ans + ans2*(i+1); 
        }
        return ans;
        
    }
};