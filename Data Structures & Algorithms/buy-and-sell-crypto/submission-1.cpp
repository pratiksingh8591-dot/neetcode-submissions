class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int profit=0;
        int mprofit=0;
      
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mini){
                mini=prices[i];
                continue;
            }
            else{
           profit=prices[i]-mini;
           mprofit=max(profit,mprofit);
            }
        }
        return mprofit;
    }
};
