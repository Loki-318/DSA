// #121

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int price : prices){
            if(minPrice > price)
                minPrice = price;

            else 
                maxProfit = max(maxProfit, price - minPrice);
        }
        if(maxProfit > 0) return maxProfit;
        else return 0;
    }
};
