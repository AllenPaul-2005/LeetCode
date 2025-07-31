class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        cursum=0
        res=nums[0]
        for i in range(len(nums)):
            cursum+=nums[i]
            res=max(cursum,res)
            if cursum<0:
                cursum=0
        return res

        