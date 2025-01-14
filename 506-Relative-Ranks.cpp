// class Solution {
// public:
//     vector<string> findRelativeRanks(vector<int>& score) {
//         int n = score.size();
//         vector<pair<int, int>> scoreWithIndex;
        
//         //store with their indices
//         for (int i = 0; i < n; ++i) {
//             scoreWithIndex.emplace_back(score[i], i);
//         }
        
//         sort(scoreWithIndex.begin(), scoreWithIndex.end(), greater<pair<int, int>>());
        
//         vector<string> result(n);
        
//         for (int i = 0; i < n; ++i) {
//             if (i == 0) {
//                 result[scoreWithIndex[i].second] = "Gold Medal";
//             } else if (i == 1) {
//                 result[scoreWithIndex[i].second] = "Silver Medal";
//             } else if (i == 2) {
//                 result[scoreWithIndex[i].second] = "Bronze Medal";
//             } else {
//                 result[scoreWithIndex[i].second] = to_string(i + 1);
//             }
//         }
        
//         return result;
//     }
// };

// //sort in descending order based on the score
// //iterate throught sorted array and assign gold to first
// //                                         silver to second          
// //                                         brozen to third
// // with original indices calculate ranks 

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> result(n);
        vector<int> indices(n);

        // Store indices in an array
        for (int i = 0; i < n; ++i) {
            indices[i] = i;
        }

        // Sort indices based on scores
        sort(indices.begin(), indices.end(), [&](int a, int b) {
            return score[a] > score[b];
        });

        // Assign ranks based on sorted indices
        for (int i = 0; i < n; ++i) {
            if (i == 0) result[indices[i]] = "Gold Medal";
            else if (i == 1) result[indices[i]] = "Silver Medal";
            else if (i == 2) result[indices[i]] = "Bronze Medal";
            else result[indices[i]] = to_string(i + 1);
        }

        return result;
    }
};