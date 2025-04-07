class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int expected_sum = n*(n+1)/2;
       int actual_sum = 0;

       for(int num : nums){
        actual_sum += num;
       } 
       return expected_sum - actual_sum;
    }
};


//the sum of nutral numbers = n * (n+1) /2
// the actual sum = sum of all numbers
// missing number = all sum - actual sum 