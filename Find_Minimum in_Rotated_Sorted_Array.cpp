class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 1 || nums[0] < nums[n-1])
        {
            return nums[0];
        }
        
        int start = 0;
        int end = n-1;
        int min_val = INT_MAX;
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            
            min_val = min(min_val, nums[mid]);
            
            if(nums[start] <= nums[mid] && nums[mid] >= nums[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            
        }
        
        return min_val;
    }
};
