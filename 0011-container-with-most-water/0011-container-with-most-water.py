class Solution:
    def maxArea(self, height: List[int]) -> int:
        l,h=0,len(height)-1
        res=0
        while l<h:
            res=max(res,(h-l)*min(height[l],height[h]))
            if height[l]<height[h]:
                l+=1
            else:
                h-=1
        return res
        