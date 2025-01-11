class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.length();
        if(k > n) return false;

        if(n == k) return true;

        vector<int> freq(26,0);
        for(char c : s){
            freq[c -'a']++;
        }

        int odd = 0;
        for(int count : freq){
            if(count % 2 != 0){
                odd++;
            }
        }
        return odd <= k;
    }
};

//use arrau to count how many times each chr appears in s
//count strings in s have an odd frequency
//for k check if countOdd <= k 
// k <= length(s)
