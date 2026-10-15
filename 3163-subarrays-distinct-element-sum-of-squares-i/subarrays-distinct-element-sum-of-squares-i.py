class Solution:
    def sumCounts(self, nums: List[int]) -> int:
        unique=set()
        start=0
        n=len(nums)
        j=0
        tsum=0
        while(start<n):
            if(j>=n):
                unique.clear()
                start+=1
                j=start
            if(start<n):
                unique.add(nums[j])
                j+=1
                tsum+=(len(unique))**2
        return tsum
