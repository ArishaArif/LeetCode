class Solution:
    def checkDivisibility(self, n: int) -> bool:
        l=[int(i) for i in str(n)]
        if len(l)<2:return False
        return n%(math.prod(l) + sum(l))==0