class Solution:
    def maxAlternatingSum(self, nums: List[int]) -> int:
        nums=[n**2 for n in nums]
        nums.sort(reverse=True)
        mid=(len(nums)+1)//2
        return sum(nums[:mid])-sum(nums[mid:])
