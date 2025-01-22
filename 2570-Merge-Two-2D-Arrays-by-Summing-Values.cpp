class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {

        vector<vector<int>> result;
        int i =0, j=0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i][0] == nums2[j][0]) {
                // same id, sum the values
                result.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++;
                j++;
            } else if (nums1[i][0] < nums2[j][0]) {
                // add the id from nums1
                result.push_back(nums1[i]);
                i++;
            } else {
                // add the id from nums2
                result.push_back(nums2[j]);
                j++;
            }
        }

        // add elements from nums1
        while (i < nums1.size()) {
            result.push_back(nums1[i]);
            i++;
        }

        //add elements from nums2
        while(j < nums2.size()){
            result.push_back(nums2[j]);
            j++;
        }
        return result;
    }
};


//ps: merge 2 2d array by sum values of equal ids
//use two pointers to iterate through the arrys
// Use two pointers to merge arrays by id
// if the ids are the same sum thir values them move the two pointers
// if the id in nums1 is smaller, add it to the result then move the i pointer
// if the id in nums2 is smaller, add it to the result then move the j pointer
//add elements from nums1
//add elements from nums2

