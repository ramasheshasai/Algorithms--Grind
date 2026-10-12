class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            if (n % (i+1) == 0){
                int k = 0;
                k= nums[i]*nums[i];
                sum = sum + k ;

            }
        }
        return sum;
        
    }
};