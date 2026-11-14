class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int i = 0; i < prices.size(); i++) {

            minPrice=min(minPrice,prices[i]);

            int pricee=prices[i]-minPrice;

            maxProfit=max(maxProfit,pricee);

        }

        return maxProfit;
    }
};