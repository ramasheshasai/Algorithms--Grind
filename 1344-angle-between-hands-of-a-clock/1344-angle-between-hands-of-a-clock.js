/**
 * @param {number} hour
 * @param {number} minutes
 * @return {number}
 */
var angleClock = function(hour, minutes) {
    let minute_angle = minutes * 6.0;
    let hour_angle = (hour % 12) * 30.0 + minutes * 0.5;

    let diff = Math.abs(hour_angle - minute_angle);
    return Math.min(diff, 360.0 - diff);
};