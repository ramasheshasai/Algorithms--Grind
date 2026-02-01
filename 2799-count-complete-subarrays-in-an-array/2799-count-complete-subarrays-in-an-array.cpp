class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int> hash;
        for (int i = 0; i < n; i++) {
            hash[nums[i]]++;
        }

        int distinct = hash.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<int,int> hash2;
            for (int j = i; j < n; j++) {
                hash2[nums[j]]++;

                if (hash2.size() == distinct) {
                    count++;
                }
            }
        }
        return count;
    }
};
