class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        freq={}
        for i in nums:
            freq[i]=freq.get(i,0)+1
        return sum( i for i in nums if freq[i]==1)