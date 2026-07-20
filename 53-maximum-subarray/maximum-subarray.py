class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        currSum=0
        maxSum=-inf
        for i in nums:
            currSum+=i
            maxSum=max(maxSum,currSum)
            if currSum<0:
                currSum=0
        return maxSum
        