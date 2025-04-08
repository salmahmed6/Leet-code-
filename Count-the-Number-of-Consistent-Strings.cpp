class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       unordered_set<char> allowed_set(allowed.begin(), allowed.end());
        int count = 0;
        
        for (const string& word : words) {
            bool is_consistent = true;
            
            for (char c : word) {
                if (allowed_set.find(c) == allowed_set.end()) {
                    is_consistent = false;
                    break;
                }
            }
            
            if (is_consistent) {
                count++;
            }
        }
        
        return count; 
    }
};


// 1- convert allowed string to a set, store them in a set for fast lookup 
// 2- iterate over each word in the array:
//      check if all its charachters exists in the allowed set
// 3- count the consistent words :
//       for each word if all chars are found in allowed; it's considerd  consistent then increment the counter 
//      if any character of the word is not in allowed ; move to the next word
// 4- return the count of consistent strings