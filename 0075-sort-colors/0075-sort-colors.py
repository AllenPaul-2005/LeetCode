class Solution:
    def sortColors(self, nums: List[int]) -> None:
        l=0
        m=0
        h=len(nums)-1
        while m<=h:
            if nums[m]==0:
                nums[m]=nums[l]
                nums[l]=0
                l+=1
                m+=1
            elif nums[m]==1:
                m+=1
            else:
                nums[m]=nums[h]
                nums[h]=2
                h-=1

        """
        Do not return anything, modify nums in-place instead.
        """
        