class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int cl=0;
        int maxCount=0;
        int ans=0;
        unordered_map<char, int> mp;  
        
        while(r<s.length())
        {
            mp[s[r]]++;
            cl=r-l+1;
            maxCount=max(maxCount, mp[s[r]]);
            if(cl-maxCount>k)
            {
                mp[s[l]]--;
                l++;
            }
            cl=r-l+1;
            ans=max(cl,ans);
            r++;
        }
        return ans;
    }
};
