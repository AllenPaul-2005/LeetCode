class Solution {
private:
    int f(int ind,vector<int> &arr,vector<int> &dp ){
        if(ind==0){
            return arr[ind];
        }
        if(ind<0){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int pick=arr[ind]+f(ind-2,arr,dp);
        int non=0+f(ind-1,arr,dp);
        return dp[ind]=max(pick,non);
    }
public:
    int houseRobber(vector<int>& money) {
        int n =money.size();
        vector<int> arr1;
        vector<int> arr2;
        if(n==1){
            return money[0];
        }
        for(int i=0;i<n;i++){
            if(i!=n-1){
                arr1.push_back(money[i]);
            }
            if(i!=0){
                arr2.push_back(money[i]);
            }
        }
        vector<int> dp(n,-1);
        int ans=f(arr1.size()-1,arr1,dp);
        vector<int> dp1(n,-1);
        int ans1=f(arr2.size()-1,arr2,dp1);
        return max(ans,ans1);
    }
public:
    int rob(vector<int>& nums) {
        int n =nums.size();
        vector<int> arr1;
        vector<int> arr2;
        if(n==1){
            return nums[0];
        }
        for(int i=0;i<n;i++){
            if(i!=n-1){
                arr1.push_back(nums[i]);
            }
            if(i!=0){
                arr2.push_back(nums[i]);
            }
        }
        vector<int> dp(n,-1);
        int ans=f(arr1.size()-1,arr1,dp);
        vector<int> dp1(n,-1);
        int ans1=f(arr2.size()-1,arr2,dp1);
        return max(ans,ans1);
        

        
    }
};