// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int n = nums.size();
//         for(int i =0; i< n; i++){
//             int num = nums[i];
//             int count =0;

//             for(int j =0; j< n; j++){
//                 if(nums[j] == num){
//                     count++;
//                 }
//             }
//             if(count == 1) return num;
//         }
//         return -1;
//     }
// };


//optimal solution using bitwise XOR
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num; // XOR cancels out duplicates
        }
        return result;
    }
};