class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
       long min_prefix = 0, max_prefix = 0, current = 0;

        for (int diff : differences) {
            current += diff;
            min_prefix = min(min_prefix, current);
            max_prefix = max(max_prefix, current);
        }

        long left = lower - min_prefix;
        long right = upper - max_prefix;

        return max(0L, right - left + 1);  
    }
};

// ps: we have to determine jow many vaild starting values for this hidden sequence stay with lower, upper
// approach: 
    // - compute prefix sums
    // -find the min , max prefix sum
    // -calculate the valid range for starting value x 
    // - return the count of integers in that range