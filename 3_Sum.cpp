class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int a,s,e,target;
        for(int i=0; i<n;i++)
        {
            a=nums[i];
            target=-a;
            s=i+1;
            e=n-1;
            while(s<e)
            {
                if(nums[s]+nums[e]==target)
                {
                    ans.push_back({nums[i],nums[s],nums[e]});
                    while(s<e && nums[s]==nums[s+1] )
                        s++;
                    while(s<e && nums[e]==nums[e-1])
                        e--;
                    s++;
                    e--;
                }
                else if(nums[s]+nums[e]>target)
                {
                    e--;
                }
                else
                {
                    s++;
                }
            }
            while(i<n-1 && nums[i]==nums[i+1])
                i++;
        }
        return ans;
    }
};
