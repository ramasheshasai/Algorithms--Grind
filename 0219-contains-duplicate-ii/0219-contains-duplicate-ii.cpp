class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n<=1){
            return false;
        }
        unordered_set<int>sets;
        for(int i=0;i<n;i++){
            if(sets.count(nums[i])){
                return true;
            }
            sets.insert(nums[i]);
            if(sets.size()>k){
                sets.erase(nums[i-k]);
            }
        }
        return false;
    }
};