class Solution:
    def canJump(self, nums: List[int]) -> bool:
        n = len(nums)
        if n == 1:
            return True

        i = 0
        max_reach = 0

        while i <= max_reach:
            max_reach = max(max_reach, i + nums[i])
            if max_reach >= n - 1:
                return True
            i += 1

        return False


        