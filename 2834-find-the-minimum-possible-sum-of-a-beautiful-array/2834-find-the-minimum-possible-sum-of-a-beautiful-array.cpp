class Solution {
public:
    int minimumPossibleSum(int n, int target) {
        long long MOD = 1e9+7;
        
        long long k = target/2;
        
        if(n <= k){
            return (n*1LL*(n+1)/2)%MOD;
        }
        
        long long sum1 = k*1LL*(k+1)/2;
        
        long long remaining = n-k;
        
        long long last = target + remaining - 1;
        long long sum2 = (target + last)*1LL*remaining/2;
        
        return (sum1 + sum2)%MOD;
    }
};
