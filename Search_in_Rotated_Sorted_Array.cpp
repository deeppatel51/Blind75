class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0, e=n-1;
        int mid;
        
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid] < nums[e]){
				if(nums[mid] < target and target <= nums[e]){
					s = mid + 1;
				}else{
					e = mid - 1;
				}
			}
			else{
				if(nums[s] <= target and target < nums[mid]){
					e = mid - 1;
				}else{
					s = mid + 1;
				}
			}
        }
        return -1;
    }
};
