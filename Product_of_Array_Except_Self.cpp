class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int product=1;
        
        int n =nums.size();
        
        vector<int> ans(nums.size());
        
        for(int i=0;i<nums.size();i++)
        {
            product = product*nums[i];
        }
        
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=product/nums[i];
            if(ans[i]<0)
            {
                ans[i]=ans[i]*(-1);
            }
        }
        return ans;
    }
};
