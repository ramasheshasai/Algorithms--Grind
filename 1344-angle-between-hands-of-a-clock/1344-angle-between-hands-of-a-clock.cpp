class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minute_angle = minutes * 6.0;   // ✅ *6 not *60
        double hour_angle = (hour % 12) * 30.0 + minutes * 0.5;

        double diff = abs(hour_angle - minute_angle);
        return min(diff, 360.0 - diff);        // ✅ no name conflict now
    }
};