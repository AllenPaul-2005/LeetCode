class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int res=0;
        while(l<r){
            res=max(res,min(height[l],height[r])*(r-l));
            if(height[r]>height[l]){
                l+=1;
            }
            else{
                r-=1;
            }
        }
        return res;
        
    }
};