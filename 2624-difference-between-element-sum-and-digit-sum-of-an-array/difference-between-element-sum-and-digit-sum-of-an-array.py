class Solution:
    def differenceOfSum(self, nums: List[int]) -> int:
        return sum(nums)-sum(int(i) for num in nums for i in str(num))