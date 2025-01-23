class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         // Use an unordered set to store unique elements from nums1
        unordered_set<int> set1(nums1.begin(), nums1.end());

        // Use another set to store the intersection
        unordered_set<int> resultSet;

        // Iterate through nums2 and check for common elements
        for (int num : nums2) {
            if (set1.count(num)) {
                // Add to the result set if it's in set1
                resultSet.insert(num); 
            }
        }

        // Convert the result set into a vector and return
        return vector<int>(resultSet.begin(), resultSet.end());
    }
    
};