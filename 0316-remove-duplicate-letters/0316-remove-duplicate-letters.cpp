class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>last(26);
        vector<bool>used(26,false);
        stack<char>st;
        for(int i=0;i<s.size();i++){
            last[s[i]-'a']=i;
        }
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(used[ch-'a'])continue;
            while(!st.empty() && st.top()>ch && last[st.top()-'a']>i)
            {
                used[st.top()-'a']=false;
                st.pop();
            }
            st.push(ch);
            used[ch-'a']=true;
        }
        string result="";
        while(!st.empty())
        {
            result=st.top()+result;
            st.pop();
        }
        return result;

        
    }
};