class Solution {
public:
        // solve by linear search to get the missing number :
        // We will run a loop(say i) from 1 to N.
        // For each integer, i, we will try to find it in the given array using linear search.
        // For that, we will run another loop to iterate over the array and consider a flag variable to indicate 
            //if the element exists in the array. 
            //Flag = 1 means the element is present and 
            //flag = 0 means the element is missing.
        // Initially, the flag value will be set to 0. While iterating the array, 
            //if we find the element, we will set the flag to 1 and break out from the loop.
        // Now, for any number i, 
        //if we cannot find it, the flag will remain 0 even after iterating the whole array and we will return the number.
                //int missingNumber(vector<int>& nums) {
                //     for (int i =0; i<= nums.size(); i++){
                //         int flag = 0;
                //         for( int j =0 ; j<= nums.size() - 1; j++){
                //             if (nums[j] == i) {
                //             flag = 1;
                //             break;
                //             }
                //         }
                //         if ( flag == 0 ) return i;
                //     }
                //     return -1;
                //     }

    // solve by hashing (better solution)

        int missingNumber(vector<int>& nums){
            int n = nums.size();
            int hash[n + 1];   // create hash array of size n+1
            
            // Initialize all elements to 0
            for (int i = 0; i <= n; i++) {
                hash[i] = 0;
            }

            // Store frequencies
            for (int i = 0; i < n; i++) {
                hash[nums[i]]++;
            }

            // Find the missing number (0 to n)
            for (int i = 0; i <= n; i++) {
                if (hash[i] == 0) {
                    return i;
                }
            }

            // Should never reach here
            return -1;
        }
};