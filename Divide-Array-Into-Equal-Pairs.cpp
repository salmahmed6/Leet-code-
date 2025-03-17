class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> freq;

        // count the frequency of each number
        for (int num : nums) {
            freq[num]++;
        }

        // check if all counts are even
        for (const auto& pair : freq) {
            if (pair.second % 2 != 0) {
                return false; //count is odd
            }
        }

        return true;

    }
};


//aproach
// first we will use the frequency array to count the occurence of each number 
// we will check if every count is even
// if two pairs are equal we will return true 
// otherwise we will return false

