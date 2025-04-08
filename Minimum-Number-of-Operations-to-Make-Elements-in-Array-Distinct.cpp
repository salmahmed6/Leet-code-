class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       int operations = 0;
    
        while (true) {
            unordered_set<int> distinct_elements(nums.begin(), nums.end());
            
            if (distinct_elements.size() == nums.size()) {
                return operations;
            }
            
            if (nums.size() >= 3) {
                nums.erase(nums.begin(), nums.begin() + 3);
            } else {
                nums.clear();
            }
            operations++;
        } 
    }
};


// initialize operation counter to track the number of operations
// loop until distinct elements check for distinct element:    
//       create an undored set from the current array 
//       if the size of the set is the same as the size of the original array, then all elemnts are distinct 
// if array is distinct return the current value of operations 
// remmove 3 elements from the front 
// increment operation counter 
// repeat the process