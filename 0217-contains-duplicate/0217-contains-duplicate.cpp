class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            cout<<nums[i]<<endl;
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;
        
    }
};