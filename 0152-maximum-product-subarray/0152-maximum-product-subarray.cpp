class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=0;
        int post=0;
        int ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(pre==0) pre=1;
            if(post==0) post=1;
            pre=pre*nums[i];
            post=post*nums[n-i-1];
            ans=max(ans,max(pre,post));
        }
        return ans;
        
    }
};