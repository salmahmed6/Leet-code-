class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    // sort both arrays
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    // initialize pointers and result 
    int i = 0, j = 0;
    vector<int> result;

    // use two pointers to find the intersection
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] == nums2[j]) {
            // add the common element to the result
            result.push_back(nums1[i]); 
            i++;
            j++;
        } else if (nums1[i] < nums2[j]) {
            i++; // move pointer i forward
        } else {
            j++; // move pointer j forward
        }
    }

    return result;
}
};