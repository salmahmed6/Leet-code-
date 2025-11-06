class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];  // current subarray sum
        int maxSum = nums[0];      // max subarray sum found so far
        
        for (int i = 1; i < nums.size(); i++) {
            // Either start a new subarray or continue the current one
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }
        
        return maxSum;
    }
};
