class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int lp=0;
        int rp=height.size()-1;
        int maxwa=0;
        while(lp<rp)
        {
            int w=rp-lp;
            int ht=min(height[lp],height[rp]);
            int currwat=w*ht;
            maxwa=max(maxwa,currwat);
            height[lp]<height[rp]?lp++:rp--;
            
        }
        return maxwa;
    }
};