class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int sumi=n*(n+1)/2;
        cout<<sumi;
        int newi=0;
        for(int i=0;i<n;i++){
            newi+=nums[i];
        }
        return (sumi-newi);
        
    }
};