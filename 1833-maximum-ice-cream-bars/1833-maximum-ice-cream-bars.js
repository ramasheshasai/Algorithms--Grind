/**
 * @param {number[]} costs
 * @param {number} coins
 * @return {number}
 */
var maxIceCream = function(costs, coins) {
    const maxCost = Math.max(...costs);
    const count = new Array(maxCost + 1).fill(0);
    
    // Counting sort: count occurrences of each cost
    for (let c of costs) {
        count[c]++;
    }
    
    let bars = 0;
    for (let cost = 1; cost <= maxCost; cost++) {
        if (count[cost] === 0) continue;
        
        // Buy as many bars at this cost as we can afford
        let canBuy = Math.min(count[cost], Math.floor(coins / cost));
        bars += canBuy;
        coins -= canBuy * cost;
        
        if (coins === 0) break;
    }
    
    return bars;
};