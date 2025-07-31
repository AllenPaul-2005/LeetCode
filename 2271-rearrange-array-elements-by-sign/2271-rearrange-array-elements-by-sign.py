class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        pos=[ a for a in nums if a>0]
        neg=[a for a in nums if a<0]
        res=[]
        i,j=0,0
        while i<len(pos) and j <len(neg):
            res.append(pos[i])
            res.append(neg[j])
            i+=1
            j+=1 
        while i<len(pos): 
            res.append(pos[i])
            i+=1
        while j<len(neg):
            res.append(neg[j])
            j+=1
        return res      