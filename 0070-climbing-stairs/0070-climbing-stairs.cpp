class Solution {
private:
    int funct(int n, vector<int> &dp){//Using Memoization using dp array to solve overlapping subproblems
        if(n<=1){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=funct(n-1,dp)+ funct(n-2,dp);
    }
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return funct(n,dp);

    }
};