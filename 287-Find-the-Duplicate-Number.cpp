// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int n = nums.size();

//         for(int i = 0; i < n ; i++){
//             for(int j = i + 1; j < n; j++){
//                 if(nums[i] == nums[j]){
//                     return nums[i];
//                 }
//             }
//         }
//         return -1;
//     }
// };

//optimized solution by using Floyd's Algorithm:
// 1- check the cycle:
//    Use two pointers (slow and fast)
//    move slow by one step and fast by two steps until they meet
//    The meeting point confirms a cycle
// 2- find the duplicate:
//    reset one pointer to the start of the array 
//    keep the other at the meeting point
//    move both pointers one step at a time
//    the point where they meet is the duplicate number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        
        do {
            slow = nums[slow];          // Move slow pointer by 1 step
            fast = nums[nums[fast]];    // Move fast pointer by 2 steps
        } while (slow != fast);
        
        slow = nums[0];                 // Reset slow pointer to start
        while (slow != fast) {
            slow = nums[slow];          // Move both pointers by 1 step
            fast = nums[fast];
        }
        
        return slow;                  
    }
};