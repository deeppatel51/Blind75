class Solution {
public:
    bool isPalindrome(string s)
    {
        int i = 0, j = s.size() - 1;

        while (i < j)
        {
            if (s[i++] != s[j--])
                return false;
        }
        return true;
    }
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.size()-1; i++)
        {
            for(int j=i; j<s.size()-1; j++)
            {
                if(isPalindrome(s.substr(i,j)))
                {
                    count++;
                }
            }
        }
        return count;
    }
};
