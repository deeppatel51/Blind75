class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        bool flag=false;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]^i)
            {
                flag=true;
                ans=i;
                break;
            }
        }
        if(flag==false)
        {
            ans=nums.size();
        }
        return ans;
    }
};
