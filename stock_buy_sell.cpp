class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> minyet;
        minyet=prices;
        int minm=INT_MAX,maxprofit=INT_MIN;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minm){
                minyet[i]=prices[i];
                minm=prices[i];
            }else{
                minyet[i]=minm;
            }
            maxprofit=max(maxprofit,(prices[i]-minyet[i]));
        }
        return maxprofit;
    }
};