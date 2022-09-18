class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> ms,mt;
        for(int i=0; i<s.length(); i++)
        {
            ms[s[i]]++;
        }
        for(int i=0; i<t.length(); i++)
        {
            mt[t[i]]++;
        }
        if(ms==mt)
        {
            return true;
        }
        else
            return false;
    }
};
