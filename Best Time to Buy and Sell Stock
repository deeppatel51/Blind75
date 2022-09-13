class Solution {
public:    
    int maxProfit(vector<int>& prices) 
    {
        int ans = 0;
        int minn = INT_MAX;
        
        for (int i = 0; i < prices.size(); i++) {
            int curr = prices[i];
            if (curr < minn) {
                minn = curr;
            }
            else if (curr - minn > ans) {
                ans = curr - minn;
            }
        }
        return ans;
    }
};
