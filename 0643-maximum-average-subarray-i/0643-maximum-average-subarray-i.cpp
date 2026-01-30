class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        long long window = 0;
        for(int i=0;i<k;i++){
            window = window + nums[i];
        }
        long long sum = window;
        for(int i=k;i<n;i++){
            window = window - nums[i-k];
            window = window + nums[i];
            sum = max(window,sum);
        }
        return (double)sum/k;
    }
};