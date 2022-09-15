class Solution {
public:
    vector<int> countBits(int n) {
        int count=0;
        int j;
        vector<int> ans;
        for(int i=0;i<=n;i++)
        {
            j=i;
            while(j)
            {
                if(j&1)
                {
                    count++;
                }
                j= j>>1;
            }
            ans.push_back(count);
            count=0;
        }
        return ans;
    }
};
