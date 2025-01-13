class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int i = m -1;    //last index of valid element in nums1
       int j = n -1;    //last index in nums2
       int k = m + n -1;    //last index in nums1

       while(i >= 0 && j >= 0){
        if(nums1[i] > nums2[j]){
            nums1[k--] = nums1[i--];
        } else{
            nums1[k--] = nums2[j--];
        }
       }
       while (j >= 0){
        nums1[k--] = nums2[j--];
       }
    }
};


//start 2 pointer 
//  -p1 point to last element in nums1
//  -p2 point to last element in nums2
//use pointer p start from last index of nums1 
// nums1 = m , nums2 = n , then last index in nums1 = m+n -1
// compare elements at p1, p2
// the greater element at p
//
