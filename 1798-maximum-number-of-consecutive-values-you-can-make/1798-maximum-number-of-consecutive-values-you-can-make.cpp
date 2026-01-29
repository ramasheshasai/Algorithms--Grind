class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        int n = coins.size();
        sort(coins.begin(), coins.end());
        long long reach = 0;
        for(int x : coins){
            if(x > reach+1){
                break;
            }
            else{
               reach = reach + x;
            }

        }
    return reach+1;
    }
};