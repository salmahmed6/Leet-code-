class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;  // track the lowest buying price
        int maxProfit = 0;       // track the best profit found so far

        for (int price : prices) {
            // update minPrice if we find a new lower price
            if (price < minPrice)
                minPrice = price;
            // calculate profit if we sell today
            else if (price - minPrice > maxProfit)
                maxProfit = price - minPrice;
        }

        return maxProfit;
    }
};
