class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        sumi=0
        for i in range(len(nums)):
            sumi+=nums[i]
        lefi=0
        for i in range(len(nums)):
            righti=sumi-lefi-nums[i]
            if lefi==righti:
                return i
            lefi+=nums[i]
        return -1

        