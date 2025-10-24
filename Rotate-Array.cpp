class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
        k = k % n; // handle cases where k > n
        
        // Reverse the whole array
        reverse(nums.begin(), nums.end());
        
        // Reverse first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // Reverse the remaining n - k elements
        reverse(nums.begin() + k, nums.end());
    }
};