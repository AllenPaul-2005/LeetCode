class Solution:
    def canJump(self, nums: List[int]) -> bool:
        if len(nums)==1:
            return True
        i=0
        maxi=0
        while i<=maxi:
            if i+nums[i]>maxi:
                maxi=i+nums[i]
            if maxi>=len(nums)-1:
                return True
            i+=1
        return False
        