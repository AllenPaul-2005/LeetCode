class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        prei={}
        for i in range(len(nums)):
            if (target-nums[i]) in prei:
                return [prei[target-nums[i]],i]
            prei[nums[i]]=i
        

        