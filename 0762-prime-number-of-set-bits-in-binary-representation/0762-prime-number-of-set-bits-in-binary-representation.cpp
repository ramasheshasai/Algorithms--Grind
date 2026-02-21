class Solution {
public:

    int countset(int n){
        int count = 0;
        while(n > 0){
            if(n % 2 == 1) count++;   
            n = n / 2;
        }
        return count;
    }

    bool isPrime(int n){
        if(n < 2) return false;
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0) return false;
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int count2 = 0;

        for(int i = left; i <= right; i++){
            int num = countset(i);
            if(isPrime(num)) count2++;
        }

        return count2;
    }
};