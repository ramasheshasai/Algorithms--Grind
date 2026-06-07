class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
         int n = nums.size();
        int total = 0;
        for(int i = 0; i < n; i++) total += nums[i];
        
        int left = 0;
        vector<int> answer(n);
        
        for(int i = 0; i < n; i++) {
            int right = total - left - nums[i];
            answer[i] = abs(left - right);
            left += nums[i];
        }
        
        return answer;
    }
};