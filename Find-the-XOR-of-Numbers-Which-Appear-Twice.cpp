class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int freq[51] ={0};
        int result =0;

        for(int num : nums){
            freq[num]++;
        } 

        for (int i = 1; i <= 50; ++i) {
            if (freq[i] == 2) {
                result ^= i;
            }
        }
        return result;
    }
};



// XOR 2 same numbers return 0 
// XOR with 0 return the same number

//approach to solve ps
//1- used the frequency array to count how many times each number appear
//2- traverse the freq array and increment index in freq array
//3- XOR the number that appear twice in the freq array
//4- if freq[i] == 2, it means number i appeared exactly twice → XOR it into the result
//5- return result