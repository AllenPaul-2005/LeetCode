class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        l,r=1,1
        cnt=1
        while r<len(nums):
            if nums[r]==nums[r-1] and cnt<2:
                cnt+=1
                nums[l]=nums[r]
                r+=1
                l+=1
            elif nums[r]==nums[r-1] and cnt>=2:
                cnt+=1
                r+=1
            else:
                cnt=1
                nums[l]=nums[r]
                l+=1
                r+=1
        return l

            
        
        