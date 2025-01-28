class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int, int> prefixSumCount;
       prefixSumCount[0] =1;

       int prefixSum =0;
       int result = 0;

        for (int num : nums) {
          prefixSum += num; 

        if (prefixSumCount.find(prefixSum - k) != prefixSumCount.end()) {
            result += prefixSumCount[prefixSum - k];
        }

        prefixSumCount[prefixSum]++;
       }

    return result; 
    }
};

// use a hash map to store the frequency of prefix sums 
//Iterate through the array, calculating the prefix sum at each step
//Check if (prefix_sum - k) exists in the hash map
//If it does, add its frequency to the result
//Update the hash map with the current prefix sum.