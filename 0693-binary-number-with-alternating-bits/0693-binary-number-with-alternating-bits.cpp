class Solution {
public:
    bool hasAlternatingBits(int n) {
       vector<int>nums;
       int k = n;
       while(k>0){
            int count = k%2;
            nums.push_back(count);
            k = k/2;
       }
       int l = nums.size();
       for(int i=0;i<l-1;i++){
        if(nums[i] == nums[i+1] ){
            return false;
        }
       }
       return true; 
    }
};