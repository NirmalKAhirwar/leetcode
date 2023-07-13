class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int lsf = INT_MAX;
        // int op = 0;
        // int pist = 0;
        
        // for(int i = 0; i < prices.size(); i++){
        //     if(prices[i] < lsf){
        //         lsf = prices[i];
        //     }
        //     pist = prices[i] - lsf;
        //     if(op < pist){
        //         op = pist;
        //     }
        // }
        // return op;

        int s = prices.size();
        
        if(s <= 1) return 0;

        int buy = prices[0], sell = 0;
        int profit = 0;
        for(int i=1; i < s; i++)
        {
            buy = min(buy, prices[i]);
            profit = prices[i]-buy;
            sell = max(sell, profit);
        }

        return sell;
    }

};