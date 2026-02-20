class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        int l = n;
        while(l>0){
            if(l% 2 == 1){
                count++;
            }
            l = l/2;
        }
        return count;
    }
};