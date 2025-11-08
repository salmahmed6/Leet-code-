class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;  // store the minimum price so far
        int maxProfit = 0;       // store the maximum profit

        for (int price : prices) {
            // Update the minimum price if current price is lower
            if (price < minPrice)
                minPrice = price;
            // Calculate profit if sold today
            else
                maxProfit = max(maxProfit, price - minPrice);
        }

        return maxProfit;
    }
};
