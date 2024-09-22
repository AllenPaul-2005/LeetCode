class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro=0;
        int mini=prices[0];
        for(int i=0;i<prices.size();i++){
            pro=max(pro,prices[i]-mini);
            mini=min(mini,prices[i]);
        }
        return pro;
        
    }
};