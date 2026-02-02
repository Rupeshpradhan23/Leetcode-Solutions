class Solution {
public:
    bool rotateString(string s, string goal) {
        bool a=false;
        if(s.length()!=goal.length())
        {
            return a;
        }
        if((s+s).find(goal)!=-1)
        {
            return true;
        }
        return false;
    }
};