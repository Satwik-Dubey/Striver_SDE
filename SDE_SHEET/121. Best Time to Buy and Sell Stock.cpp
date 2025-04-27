class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int minbuy=INT_MAX;
       
            int maxprofit=0;
            
            for(int i=0;i<prices.size();i++){
                minbuy=min(prices[i],minbuy);
                int profit=prices[i]-minbuy;
                maxprofit=max(profit,maxprofit);
    
            }
            return maxprofit;
        }
    };