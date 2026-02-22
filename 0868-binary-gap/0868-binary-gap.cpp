class Solution {
public:
    int binaryGap(int n) {
        vector<int> ans;

        while(n > 0){
            ans.push_back(n % 2);
            n = n / 2;
        }

        int maxi = 0;
        int g = ans.size();

        for(int i = 0; i < g; i++){
            if(ans[i] == 1){
                for(int j = i + 1; j < g; j++){
                    if(ans[j] == 1){
                        maxi = max(maxi, j - i);
                        break;   
                    }
                }
            }
        }
        return maxi;
    }
};