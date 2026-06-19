/**
 * @param {number[]} gain
 * @return {number}
 */
var largestAltitude = function(gain) {
     let altitude = 0, maxAlt = 0;
    for (let g of gain) {
        altitude += g;
        maxAlt = Math.max(maxAlt, altitude);
    }
    return maxAlt;
};