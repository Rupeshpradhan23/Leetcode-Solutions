class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        vector<int>fre(26,0);
        vector<int>freq(26,0);
        for(int i=0;i<s.length();i++)
        {
            fre[s[i]-'a']++;
        }
        for(int j=0;j<t.length();j++)
        {
            freq[t[j]-'a']++;
        }
        if (fre==freq){
            return true;
        } 
        return false;
        
        
        
    }
};