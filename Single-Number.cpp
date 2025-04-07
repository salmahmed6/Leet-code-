class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result =0; 
        for(int num : nums){
           result ^= num;
        }
        return result;
    }
};




// XOR of two same numbers is 0
// XOR with 0 return number itself

//approach for solving this ps
// 1- initialize result =0
// 2- iterate for the array and XOR each index with result
// 3- result will hold the single number 