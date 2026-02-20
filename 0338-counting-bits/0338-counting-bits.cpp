class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>nums(n+1);
        for(int i=0;i<=n;i++){
            int count = 0;
            int l = i;
            while(l>0){
                if(l%2 == 1){
                    count++;
                }
                l = l/2;
            }
            nums[i] = count;
        }
        return nums;
    }
};