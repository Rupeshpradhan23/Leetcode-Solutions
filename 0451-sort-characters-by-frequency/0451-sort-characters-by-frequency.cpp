class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(char c : s)
            freq[c]++;

        vector<pair<char,int>> v;
        for(auto x : freq)
            v.push_back(x);

        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        string ans;
        for(auto x : v){
            ans += string(x.second, x.first);
        }
        return ans;
    }
};