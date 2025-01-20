class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> final;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i=0; i<n; ++i){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            int target = -nums[i];
            int left = i+1;
            int right = n-1;
            while(left < right){
                int sum = nums[left] + nums[right];
                if(sum == target){
                    final.push_back({nums[i], nums[left], nums[right]});
                    ++left;
                    --right;
                    while(left < right && nums[left] == nums[left -1]){
                        ++left;
                    }
                    while(right> left && nums[right] == nums[right +1]){
                        --right;
                    }
                } else if(sum < target){
                    ++left;
                } else{
                    --right;
                }
            }
        }
        return final;
    }
};

//idea: 3 sums
//approach:
// 1- handle edge cases: 
//      check if the array length < 3 return an empty array []
//      check if the all elements of array is 0 return [[0,0,0]]
// 2- sort the array
// 3- iterate throught the array 
//    for each nums[i] we should find nums[j] + nums[k] which that their sums equal to -nums[i]
// 4- use two pointer technique:
//    initialize the letf to i+1 and right to the last element
//    calculate  the sum
// 5- check the sum:
//    if the sum is 0: add the result to final array
//    if the sum is < 0: move the left pointer to increase the sum j++
//    if the sum is > 0: move the right pointer to decrease the sum k--
// 6- skip duplicate to insure unique values
// 7- return final 