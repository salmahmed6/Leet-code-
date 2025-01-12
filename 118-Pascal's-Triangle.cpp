class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        for (int i = 0; i < numRows; i++) {
        vector<int> row(i + 1, 1);

        for (int j = 1; j < i; j++) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }

        triangle.push_back(row);
    }

    return triangle; 
    }
};

//initialize the triangle starts and ends with 1
//for each subsequent row, compute the values based on the previous row.
//each row starts and ends with 1.
// the values in between are the sum of the two numbers directly above them from the previous row.
//return the result 
