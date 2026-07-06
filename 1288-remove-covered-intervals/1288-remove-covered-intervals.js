/**
 * @param {number[][]} intervals
 * @return {number}
 */
var removeCoveredIntervals = function(intervals) {
    intervals.sort((a, b) => a[0] === b[0] ? b[1] - a[1] : a[0] - b[0]);

    let count = 0, maxEnd = 0;
    for (let [l, r] of intervals) {
        if (r > maxEnd) {
            count++;
            maxEnd = r;
        }
    }
    return count;
};