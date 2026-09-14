class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        l=[int(i) for i in str(n)]
        return math.prod(l)-sum(l)