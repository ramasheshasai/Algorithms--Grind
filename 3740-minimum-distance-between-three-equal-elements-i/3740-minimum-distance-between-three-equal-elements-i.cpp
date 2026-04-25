class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                for(int k = j + 1; k < n; k++){
                    if(nums[i] == nums[j] && nums[j] == nums[k]){
                        int x = 2 * (k - i);  // simplified formula
                        mini = min(mini, x);
                    }
                }
            }
        }

        return (mini == INT_MAX) ? -1 : mini;
    }
};