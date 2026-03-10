class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>s(nums.begin(),nums.end());
       int longi = 0;
       // 100 , 4 , 2200 , 1 , 3 , 2 
        // curr = 1
        //len = 2
        for(int num : s){
            if(!s.count(num-1)){
                int curr = num;
                int len = 1;
            
            while(s.count(curr+1)){
                curr ++;
                len++;
            }
            longi = max(longi,len);
            }
        }
        return longi;


    }
};