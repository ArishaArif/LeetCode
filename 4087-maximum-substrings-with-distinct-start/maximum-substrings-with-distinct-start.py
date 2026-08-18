class Solution:
    def maxDistinct(self, s: str) -> int:
        return len({n for n in s})