class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxCost = *max_element(costs.begin(), costs.end());
        vector<int> count(maxCost + 1, 0);
        
        // Counting sort: count occurrences of each cost
        for (int c : costs) {
            count[c]++;
        }
        
        int bars = 0;
        for (int cost = 1; cost <= maxCost; cost++) {
            if (count[cost] == 0) continue;
            
            // Buy as many bars at this cost as we can afford
            int canBuy = min(count[cost], coins / cost);
            bars += canBuy;
            coins -= canBuy * cost;
            
            if (coins == 0) break;
        }
        
        return bars;
    }
};