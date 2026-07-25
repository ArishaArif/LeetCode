class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        max=float('-inf')
        sums=0
        p1=0
        p2=k
        sums=sum(nums[i] for i in range(k))
        max=sums/k
        for i in range(1,len(nums)-k+1):
            sums-=nums[p1]
            sums+=nums[p2]
            p2+=1
            p1+=1
            if(sums/k >max):
                max=sums/k
        return max
