class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>map;
        for(int i=0;i<n;i++){
            map[nums[i]] = 1;
        }
        for(int i=0;i<=n;i++){
            if(map[i] == 0){
                return i;
            }
        }
        return -1;
    }
};