class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_value = INT_MIN;
        int product = 1;
        for(int i=0;i<nums.size();i++){
            product *= nums[i];
            max_value = max(max_value,product);
            if(product==0){
                product = 1;
            }

        }
        
        product=1;
        for(int i=nums.size()-1;i>=0;i--){
            product *= nums[i];
            max_value = max(max_value,product);
            if(product==0){
                product=1;
            }
        }
        
        return max_value;
    }
};
